	THUMB_FUNC_START sub_08126030
sub_08126030: @ 0x08126030
	push {r4,lr}
	ldr r4, _08126094  @ =gUnknown_0818072E
	ldrh r0, [r4]
	bl sub_08133468
	ldr r1, _08126098  @ =gUnknown_02000AA0
	strh r0, [r1]
	ldrh r0, [r4, #2]
	bl sub_08133468
	ldr r1, _0812609C  @ =gUnknown_02000AA2
	strh r0, [r1]
	ldrh r0, [r4, #4]
	bl sub_08133468
	ldr r1, _081260A0  @ =gUnknown_02000AA4
	strh r0, [r1]
	ldrh r0, [r4, #6]
	bl sub_08133468
	ldr r1, _081260A4  @ =gUnknown_02000AA6
	strh r0, [r1]
	ldrh r0, [r4, #8]
	bl sub_08133468
	ldr r1, _081260A8  @ =gUnknown_02000AA8
	strh r0, [r1]
	ldrh r0, [r4, #10]
	bl sub_08133468
	ldr r1, _081260AC  @ =gUnknown_02000AAA
	strh r0, [r1]
	ldrh r0, [r4, #12]
	bl sub_08133468
	ldr r1, _081260B0  @ =gUnknown_02000AAC
	strh r0, [r1]
	ldrh r0, [r4, #14]
	bl sub_08133468
	ldr r1, _081260B4  @ =gUnknown_02000AAE
	strh r0, [r1]
	ldr r0, _081260B8  @ =gRam
	ldr r1, _081260BC  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_08126094:
	.4byte gUnknown_0818072E
_08126098:
	.4byte gUnknown_02000AA0
_0812609C:
	.4byte gUnknown_02000AA2
_081260A0:
	.4byte gUnknown_02000AA4
_081260A4:
	.4byte gUnknown_02000AA6
_081260A8:
	.4byte gUnknown_02000AA8
_081260AC:
	.4byte gUnknown_02000AAA
_081260B0:
	.4byte gUnknown_02000AAC
_081260B4:
	.4byte gUnknown_02000AAE
_081260B8:
	.4byte gRam
_081260BC:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08126030

