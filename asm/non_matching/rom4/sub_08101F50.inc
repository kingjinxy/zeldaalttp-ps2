	THUMB_FUNC_START sub_08101F50
sub_08101F50: @ 0x08101F50
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r7, _08101F90  @ =gRam
	ldr r1, _08101F94  @ =0x00001062
	add r0, r7, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08101F68
	b _08102100
_08101F68:
	ldr r2, _08101F98  @ =0x00000F82
	add r0, r7, r2
	add r1, r4, r0
	ldrb r0, [r1]
	add r6, r0, #0
	cmp r6, #0
	bne _08101FA0
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C3028
	lsl r0, r0, #24
	cmp r0, #0
	beq _08101FA0
	ldr r3, _08101F9C  @ =0x00000FA2
	add r0, r7, r3
	add r0, r4, r0
	strb r6, [r0]
	b _08102128
_08101F90:
	.4byte gRam
_08101F94:
	.4byte 0x00001062
_08101F98:
	.4byte 0x00000F82
_08101F9C:
	.4byte 0x00000FA2
_08101FA0:
	add r0, r5, #0
	bl sub_080C58F0
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _08101FB4
	b _08102128
_08101FB4:
	add r0, r5, #0
	bl sub_080C5044
	ldr r6, _08102044  @ =gRam
	ldr r0, _08102048  @ =0x00001052
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r3, _0810204C  @ =0x00000F92
	add r1, r6, r3
	add r1, r5, r1
	lsl r0, r0, #24
	lsr r0, r0, #25
	mov r4, #1
	and r0, r0, r4
	strb r0, [r1]
	ldr r0, _08102050  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldr r3, _08102054  @ =gUnknown_0817B5F8
	ldrb r0, [r2]
	lsr r0, r0, #2
	and r0, r0, r4
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	bl Sprite3_Move
	ldr r1, _08102058  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r4, [r0]
	cmp r4, #0
	bne _08102012
	add r0, r5, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _08102012
	ldr r2, _0810205C  @ =0x00000FA2
	add r0, r6, r2
	add r0, r5, r0
	strb r4, [r0]
_08102012:
	ldr r2, _08102044  @ =gRam
	ldr r3, _08102048  @ =0x00001052
	add r0, r2, r3
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _08102026
	b _08102128
_08102026:
	mov r1, #29
	ldr r0, _08102060  @ =0x000011D2
	add r6, r2, r0
_0810202C:
	lsl r0, r1, #24
	asr r4, r0, #24
	add r3, r4, r6
	ldrb r0, [r3]
	cmp r0, #0
	beq _08102064
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _0810202C
	b _08102128
_08102044:
	.4byte gRam
_08102048:
	.4byte 0x00001052
_0810204C:
	.4byte 0x00000F92
_08102050:
	.4byte 0x00000F22
_08102054:
	.4byte gUnknown_0817B5F8
_08102058:
	.4byte 0x00000FC2
_0810205C:
	.4byte 0x00000FA2
_08102060:
	.4byte 0x000011D2
_08102064:
	mov r1, #6
	strb r1, [r3]
	ldr r3, _081020DC  @ =0x000015F8
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _081020E0  @ =0x0000122C
	add r1, r2, r0
	add r1, r4, r1
	ldr r3, _081020E4  @ =0x00000EE2
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081020E8  @ =0x00001268
	add r1, r2, r0
	add r1, r4, r1
	add r3, r3, #32
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _081020EC  @ =0x00000ED2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	sub r3, r3, #16
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r3, _081020F0  @ =0x0000120E
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	add r3, r3, #60
	add r0, r2, r3
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _081020F4  @ =0x000012FE
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #10
	strb r1, [r0]
	add r3, r3, #210
	add r0, r2, r3
	add r0, r4, r0
	strb r5, [r0]
	ldr r0, _081020F8  @ =0x00001358
	add r1, r2, r0
	add r1, r4, r1
	ldr r3, _081020FC  @ =0x000010F2
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	b _08102128
	.byte 0x00
	.byte 0x00
_081020DC:
	.4byte 0x000015F8
_081020E0:
	.4byte 0x0000122C
_081020E4:
	.4byte 0x00000EE2
_081020E8:
	.4byte 0x00001268
_081020EC:
	.4byte 0x00000ED2
_081020F0:
	.4byte 0x0000120E
_081020F4:
	.4byte 0x000012FE
_081020F8:
	.4byte 0x00001358
_081020FC:
	.4byte 0x000010F2
_08102100:
	add r0, r5, #0
	bl sub_08102350
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08102128
	ldr r1, _08102130  @ =gUnknown_0817B5FC
	ldr r2, _08102134  @ =0x00000F52
	add r0, r7, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_08102128:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102130:
	.4byte gUnknown_0817B5FC
_08102134:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08101F50

