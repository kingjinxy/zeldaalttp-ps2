	THUMB_FUNC_START sub_08112E80
sub_08112E80: @ 0x08112E80
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _08112F64  @ =gRam
	ldr r3, _08112F68  @ =0x00000FB2
	add r2, r4, r3
	add r2, r0, r2
	mov r5, #0
	mov r3, #2
	strb r3, [r2]
	ldr r3, _08112F6C  @ =0x00000FC2
	add r2, r4, r3
	add r2, r0, r2
	strb r1, [r2]
	ldr r2, _08112F70  @ =0x00000F52
	add r1, r4, r2
	add r1, r0, r1
	mov r2, #7
	strb r2, [r1]
	sub r3, r3, #96
	add r1, r4, r3
	add r1, r0, r1
	strb r5, [r1]
	ldr r1, _08112F74  @ =gUnknown_02010994
	strb r0, [r1]
	ldr r2, _08112F78  @ =gUnknown_02010990
	mov r1, #4
	strb r1, [r2]
	ldr r2, _08112F7C  @ =0x00000F92
	add r1, r4, r2
	add r1, r0, r1
	mov r2, #6
	strb r2, [r1]
	add r3, r3, #192
	add r1, r4, r3
	add r1, r0, r1
	mov r2, #255
	strb r2, [r1]
	ldr r2, _08112F80  @ =gUnknown_02010993
	mov r1, #1
	strb r1, [r2]
	ldr r1, _08112F84  @ =0x00000EE2
	add r2, r4, r1
	add r2, r0, r2
	ldr r5, _08112F88  @ =gUnknown_0817D824
	ldr r3, _08112F8C  @ =gUnknown_02010992
	ldrb r1, [r3]
	lsl r1, r1, #2
	add r1, r1, r5
	ldrh r1, [r1]
	strb r1, [r2]
	ldr r1, _08112F90  @ =0x00000F02
	add r2, r4, r1
	add r2, r0, r2
	ldrb r1, [r3]
	lsl r1, r1, #2
	add r1, r1, r5
	ldrh r1, [r1]
	lsr r1, r1, #8
	strb r1, [r2]
	ldr r1, _08112F94  @ =0x00000ED2
	add r2, r4, r1
	add r2, r0, r2
	ldrb r1, [r3]
	lsl r1, r1, #1
	add r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	strb r1, [r2]
	ldr r2, _08112F98  @ =0x00000EF2
	add r4, r4, r2
	add r0, r0, r4
	ldrb r1, [r3]
	lsl r1, r1, #1
	add r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r5
	ldrh r1, [r1]
	lsr r1, r1, #8
	strb r1, [r0]
	ldrb r0, [r3]
	lsl r0, r0, #5
	ldr r1, _08112F9C  @ =gUnknown_0817D6A0
	add r6, r0, r1
	mov r5, #0
_08112F2C:
	lsl r4, r5, #1
	add r0, r4, r6
	ldrh r0, [r0]
	bl sub_08133468
	ldr r3, _08112FA0  @ =gUnknown_02000A00
	add r1, r4, r3
	strh r0, [r1]
	ldr r1, _08112FA4  @ =gUnknown_02000E00
	add r4, r4, r1
	strh r0, [r4]
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #15
	bls _08112F2C
	ldr r1, _08112F64  @ =gRam
	ldr r3, _08112FA8  @ =0x0000099B
	add r2, r1, r3
	mov r0, #1
	strb r0, [r2]
	ldr r0, _08112FAC  @ =0x00000A3C
	add r1, r1, r0
	mov r0, #13
	strh r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_08112F64:
	.4byte gRam
_08112F68:
	.4byte 0x00000FB2
_08112F6C:
	.4byte 0x00000FC2
_08112F70:
	.4byte 0x00000F52
_08112F74:
	.4byte gUnknown_02010994
_08112F78:
	.4byte gUnknown_02010990
_08112F7C:
	.4byte 0x00000F92
_08112F80:
	.4byte gUnknown_02010993
_08112F84:
	.4byte 0x00000EE2
_08112F88:
	.4byte gUnknown_0817D824
_08112F8C:
	.4byte gUnknown_02010992
_08112F90:
	.4byte 0x00000F02
_08112F94:
	.4byte 0x00000ED2
_08112F98:
	.4byte 0x00000EF2
_08112F9C:
	.4byte gUnknown_0817D6A0
_08112FA0:
	.4byte gUnknown_02000A00
_08112FA4:
	.4byte gUnknown_02000E00
_08112FA8:
	.4byte 0x0000099B
_08112FAC:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_08112E80

