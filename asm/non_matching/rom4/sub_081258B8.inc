	THUMB_FUNC_START sub_081258B8
sub_081258B8: @ 0x081258B8
	push {r4,lr}
	ldr r1, _081258EC  @ =gRam
	ldr r2, _081258F0  @ =0x00001B0A
	add r0, r1, r2
	ldrh r0, [r0]
	lsr r0, r0, #8
	lsl r0, r0, #1
	add r0, r0, #128
	ldr r3, _081258F4  @ =0x00001B14
	add r2, r1, r3
	strh r0, [r2]
	ldr r3, _081258F8  @ =gUnknown_081806A8
	ldr r4, _081258FC  @ =0x00001B0C
	add r0, r1, r4
	ldrb r2, [r0]
	lsl r0, r2, #1
	add r0, r0, r2
	lsl r0, r0, #2
	ldr r2, _08125900  @ =0x00001B18
	add r1, r1, r2
	add r0, r0, r3
	ldm r0!, {r2-r4}
	stm r1!, {r2-r4}
	pop {r4}
	pop {r0}
	bx r0
_081258EC:
	.4byte gRam
_081258F0:
	.4byte 0x00001B0A
_081258F4:
	.4byte 0x00001B14
_081258F8:
	.4byte gUnknown_081806A8
_081258FC:
	.4byte 0x00001B0C
_08125900:
	.4byte 0x00001B18
	THUMB_FUNC_END sub_081258B8

