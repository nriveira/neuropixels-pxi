#ifndef __PROBEINTERFACEJSON_H__
#define __PROBEINTERFACEJSON_H__

#include "../NeuropixComponents.h"
#include "../Utils.h"

class ProbeInterfaceJson
{
public:

    static bool writeProbeSettingsToJson(File& file, ProbeSettings originalsettings)
    {

        std::cout << "Writing JSON file." << std::endl;

        DynamicObject settings;

        settings.setProperty(Identifier("specification"),
            var("probeinterface"));
        settings.setProperty(Identifier("version"),
            var("0.2.2dev0"));

        Array<var> contact_positions;
        Array<var> shank_ids;
        Array<var> device_channel_indices;
        Array<var> contact_plane_axes;
        Array<var> contact_shapes;
        Array<var> contact_shape_params;

        Array<var> ax1 = { 1.0f, 0.0f };
        Array<var> ax2 = { 0.0f, 1.0f };
        Array<var> contact_plane_axis = { ax1, ax2 };

        Array<int> xpositions = { 27, 59, 11, 43 };

        DynamicObject::Ptr contact_shape_param = new DynamicObject;
        contact_shape_param->setProperty(Identifier("width"), 12);

        for (int ch = 0; ch < 24; ch++)
        {
            Array<var> contact_position;
            contact_position.add(xpositions[ch % 4]);
            contact_position.add((ch / 2) * 20);

            contact_positions.add(contact_position);
            shank_ids.add("0");
            device_channel_indices.add(ch);
            contact_plane_axes.add(contact_plane_axis);
            contact_shapes.add("square");
            contact_shape_params.add(contact_shape_param.get());

        }

        DynamicObject::Ptr probe = new DynamicObject();
        DynamicObject::Ptr annotations = new DynamicObject();
        annotations->setProperty(Identifier("name"), var(""));

        probe->setProperty(Identifier("ndim"), 2);
        probe->setProperty(Identifier("si_units"), "um");
        probe->setProperty(Identifier("annotations"), var(annotations));
        probe->setProperty(Identifier("contact_positions"), contact_positions);
        probe->setProperty(Identifier("contact_plane_axes"), contact_plane_axes);
        probe->setProperty(Identifier("contact_shapes"), contact_shapes);
        probe->setProperty(Identifier("contact_shape_params"), contact_shape_params);
        probe->setProperty(Identifier("device_channel_indices"), device_channel_indices);
        probe->setProperty(Identifier("shank_ids"), shank_ids);

        Array<var> probes;
        probes.add(probe.get());

        settings.setProperty(Identifier("probes"), probes);

        if (file.exists())
            file.deleteFile();

        FileOutputStream f(file);

        settings.writeAsJSON(f, 4, false);

        return true;

    }

    static bool readProbeSettingsFromJson(File& file, ProbeSettings& settings)
    {

        std::cout << "Reading JSON file." << std::endl;

        var result;

        static Result r = JSON::parse(file.loadFileAsString(), result);

        DynamicObject::Ptr obj = result.getDynamicObject();

        // check that specification == 'probeinterface'
        if (obj->hasProperty(Identifier("specification")))
        {
            String specification = obj->getProperty(Identifier("specification")).toString();

            if (specification.compare("probeinterface") != 0)
                return false;
        }

        if (obj->hasProperty(Identifier("probes")))
        {
            Array<var>* probes = obj->getProperty(Identifier("probes")).getArray();

            // check that this file contains only one probe
            if (probes->size() != 1)
                return false;

            DynamicObject::Ptr probe = probes->getReference(0).getDynamicObject();

            if (probe->hasProperty(Identifier("device_channel_indices")))
            {

                Array<var>* device_channel_indices = probe->getProperty(Identifier("device_channel_indices")).getArray();

                for (int ch = 0; ch < device_channel_indices->size(); ch++)
                {
                    int index = int(device_channel_indices->getReference(ch));
                }
            }

            if (probe->hasProperty(Identifier("shank_ids")))
            {

                Array<var>* shank_ids = probe->getProperty(Identifier("shank_ids")).getArray();

                for (int ch = 0; ch < shank_ids->size(); ch++)
                {
                    int shank_id = int(shank_ids->getReference(ch));
                }
            }

            if (probe->hasProperty(Identifier("contact_positions")))
            {

                Array<var>* contact_positions = probe->getProperty(Identifier("contact_positions")).getArray();

                for (int ch = 0; ch < contact_positions->size(); ch++)
                {
                    Array<var>* contact_position = contact_positions->getReference(ch).getArray();

                    int xpos = int(contact_position->getReference(0));
                    int ypos = int(contact_position->getReference(1));

                    std::cout << " Position: " << xpos << ", " << ypos << std::endl;
                }
            }
        }

        return true;
    }
};

#endif