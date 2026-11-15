	THUMB_FUNC_START sub_08127164
sub_08127164: @ 0x08127164
	push {lr}
	ldr r1, _08127190  @ =gUnknown_03000050
	ldrb r0, [r1, #1]
	sub r0, r0, #1
	strb r0, [r1, #1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0812718C
	ldr r0, _08127194  @ =gUnknown_0818072E
	ldrh r0, [r0, #14]
	bl sub_08133468
	ldr r1, _08127198  @ =gUnknown_02000EAE
	strh r0, [r1]
	ldr r1, _0812719C  @ =gRam
	ldr r0, _081271A0  @ =0x0000099B
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0812718C:
	pop {r0}
	bx r0
_08127190:
	.4byte gUnknown_03000050
_08127194:
	.4byte gUnknown_0818072E
_08127198:
	.4byte gUnknown_02000EAE
_0812719C:
	.4byte gRam
_081271A0:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08127164

