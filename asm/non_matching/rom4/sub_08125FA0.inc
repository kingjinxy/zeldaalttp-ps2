	THUMB_FUNC_START sub_08125FA0
sub_08125FA0: @ 0x08125FA0
	push {r4,lr}
	ldr r4, _08126004  @ =gUnknown_0818072E
	ldrh r0, [r4]
	bl sub_08133468
	ldr r1, _08126008  @ =gUnknown_02000EA0
	strh r0, [r1]
	ldrh r0, [r4, #2]
	bl sub_08133468
	ldr r1, _0812600C  @ =gUnknown_02000EA2
	strh r0, [r1]
	ldrh r0, [r4, #4]
	bl sub_08133468
	ldr r1, _08126010  @ =gUnknown_02000EA4
	strh r0, [r1]
	ldrh r0, [r4, #6]
	bl sub_08133468
	ldr r1, _08126014  @ =gUnknown_02000EA6
	strh r0, [r1]
	ldrh r0, [r4, #8]
	bl sub_08133468
	ldr r1, _08126018  @ =gUnknown_02000EA8
	strh r0, [r1]
	ldrh r0, [r4, #10]
	bl sub_08133468
	ldr r1, _0812601C  @ =gUnknown_02000EAA
	strh r0, [r1]
	ldrh r0, [r4, #12]
	bl sub_08133468
	ldr r1, _08126020  @ =gUnknown_02000EAC
	strh r0, [r1]
	ldrh r0, [r4, #14]
	bl sub_08133468
	ldr r1, _08126024  @ =gUnknown_02000EAE
	strh r0, [r1]
	ldr r0, _08126028  @ =gRam
	ldr r1, _0812602C  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_08126004:
	.4byte gUnknown_0818072E
_08126008:
	.4byte gUnknown_02000EA0
_0812600C:
	.4byte gUnknown_02000EA2
_08126010:
	.4byte gUnknown_02000EA4
_08126014:
	.4byte gUnknown_02000EA6
_08126018:
	.4byte gUnknown_02000EA8
_0812601C:
	.4byte gUnknown_02000EAA
_08126020:
	.4byte gUnknown_02000EAC
_08126024:
	.4byte gUnknown_02000EAE
_08126028:
	.4byte gRam
_0812602C:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08125FA0

