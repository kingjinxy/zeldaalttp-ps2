	THUMB_FUNC_START sub_081260C0
sub_081260C0: @ 0x081260C0
	push {lr}
	ldr r1, _081260FC  @ =gUnknown_03000050
	ldrb r0, [r1, #1]
	add r0, r0, #1
	strb r0, [r1, #1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #112
	bne _081260D8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_081260D8:
	ldr r1, _08126100  @ =gRam
	ldr r0, _08126104  @ =0x00001B10
	add r2, r1, r0
	ldr r3, _08126108  @ =0x000002DB
	add r0, r3, #0
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldr r0, _0812610C  @ =0x00001B0E
	add r1, r1, r0
	mov r2, #219
	lsl r2, r2, #1
	add r0, r2, #0
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	pop {r0}
	bx r0
_081260FC:
	.4byte gUnknown_03000050
_08126100:
	.4byte gRam
_08126104:
	.4byte 0x00001B10
_08126108:
	.4byte 0x000002DB
_0812610C:
	.4byte 0x00001B0E
	THUMB_FUNC_END sub_081260C0

