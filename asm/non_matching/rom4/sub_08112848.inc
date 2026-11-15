	THUMB_FUNC_START sub_08112848
sub_08112848: @ 0x08112848
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _081128B4  @ =gRam
	ldr r1, _081128B8  @ =0x00000F72
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _081128D0
	ldr r2, _081128BC  @ =0x00001152
	add r1, r5, r2
	add r1, r4, r1
	ldr r3, _081128C0  @ =0x00000FC2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r2, [r0]
	mov r0, #224
	sub r0, r0, r2
	strb r0, [r1]
	ldr r1, _081128C4  @ =0x000016C4
	add r0, r5, r1
	ldrh r1, [r0]
	ldr r2, _081128C8  @ =0x00000968
	add r0, r5, r2
	strh r1, [r0]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r5, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	add r0, r4, #0
	mov r1, #48
	bl sub_080C2DCC
	ldr r3, _081128CC  @ =0x00000F12
	add r0, r5, r3
	add r0, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	b _081129B8
	.byte 0x00
	.byte 0x00
_081128B4:
	.4byte gRam
_081128B8:
	.4byte 0x00000F72
_081128BC:
	.4byte 0x00001152
_081128C0:
	.4byte 0x00000FC2
_081128C4:
	.4byte 0x000016C4
_081128C8:
	.4byte 0x00000968
_081128CC:
	.4byte 0x00000F12
_081128D0:
	cmp r0, #3
	bne _081128F8
	ldr r3, _081128EC  @ =0x00001152
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _081128F0  @ =0x00000F12
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r3, _081128F4  @ =0x00000F22
	add r0, r5, r3
	b _081129B6
_081128EC:
	.4byte 0x00001152
_081128F0:
	.4byte 0x00000F12
_081128F4:
	.4byte 0x00000F22
_081128F8:
	cmp r0, #4
	bne _081129A8
	ldr r1, _08112984  @ =0x00001142
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #239
	bls _0811292C
	add r0, r4, #0
	mov r1, #41
	bl sub_080CF0AC
	ldr r2, _08112988  @ =0x000015ED
	add r1, r5, r2
	mov r0, #2
	strb r0, [r1]
	ldr r3, _0811298C  @ =0x000015EC
	add r1, r5, r3
	mov r0, #5
	strb r0, [r1]
	ldr r1, _08112990  @ =gUnknown_02010991
	mov r0, #15
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C51C8
_0811292C:
	ldrb r0, [r6]
	cmp r0, #0
	beq _08112946
	ldr r1, _08112994  @ =0x00001152
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	ldr r2, _08112998  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #21
	strb r1, [r0]
_08112946:
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	ble _08112974
	ldr r1, _0811299C  @ =gUnknown_02010993
	mov r0, #0
	strb r0, [r1]
	ldr r3, _08112994  @ =0x00001152
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	strb r1, [r6]
	ldr r1, _08112998  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #22
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #1
	mov r2, #29
	bl sub_080AD658
_08112974:
	ldr r2, _081129A0  @ =0x00000F12
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r3, _081129A4  @ =0x00000F22
	add r0, r5, r3
	b _081129B6
_08112984:
	.4byte 0x00001142
_08112988:
	.4byte 0x000015ED
_0811298C:
	.4byte 0x000015EC
_08112990:
	.4byte gUnknown_02010991
_08112994:
	.4byte 0x00001152
_08112998:
	.4byte 0x00000F92
_0811299C:
	.4byte gUnknown_02010993
_081129A0:
	.4byte 0x00000F12
_081129A4:
	.4byte 0x00000F22
_081129A8:
	ldr r1, _08112A2C  @ =0x00001152
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08112A30  @ =0x00001142
	add r0, r5, r2
_081129B6:
	add r0, r4, r0
_081129B8:
	strb r1, [r0]
	ldr r7, _08112A34  @ =gRam
	ldr r3, _08112A38  @ =0x00000FC2
	add r0, r7, r3
	add r2, r4, r0
	ldrb r5, [r2]
	cmp r5, #0
	beq _081129CA
	b _08112AC6
_081129CA:
	ldr r1, _08112A3C  @ =0x00000F72
	add r0, r7, r1
	add r6, r4, r0
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _081129EA
	add r0, r4, #0
	mov r1, #108
	str r2, [sp]
	bl sub_080CF018
	ldr r2, [sp]
_081129EA:
	ldrb r0, [r6]
	cmp r0, #5
	bne _08112A90
	ldr r0, _08112A40  @ =gUnknown_02010992
	ldrb r0, [r0]
	cmp r0, #3
	bne _08112A50
	mov r1, #16
	ldr r3, _08112A44  @ =0x00000F62
	add r0, r7, r3
	add r0, r4, r0
	strb r5, [r0]
	add r3, r3, #48
	add r0, r7, r3
	add r0, r4, r0
	strb r5, [r0]
	sub r3, r3, #64
	add r0, r7, r3
	add r0, r4, r0
	strb r5, [r0]
	strb r1, [r2]
	ldr r0, _08112A48  @ =gUnknown_02010990
	strb r5, [r0]
	add r0, r0, #3
	strb r5, [r0]
	ldr r0, _08112A4C  @ =0x00000EA5
	add r1, r7, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
	b _08112AC4
_08112A2C:
	.4byte 0x00001152
_08112A30:
	.4byte 0x00001142
_08112A34:
	.4byte gRam
_08112A38:
	.4byte 0x00000FC2
_08112A3C:
	.4byte 0x00000F72
_08112A40:
	.4byte gUnknown_02010992
_08112A44:
	.4byte 0x00000F62
_08112A48:
	.4byte gUnknown_02010990
_08112A4C:
	.4byte 0x00000EA5
_08112A50:
	mov r1, #48
	ldr r3, _08112A84  @ =0x00000F62
	add r0, r7, r3
	add r0, r4, r0
	strb r5, [r0]
	add r3, r3, #48
	add r0, r7, r3
	add r0, r4, r0
	strb r5, [r0]
	sub r3, r3, #64
	add r0, r7, r3
	add r0, r4, r0
	strb r5, [r0]
	strb r1, [r2]
	ldr r0, _08112A88  @ =gUnknown_02010990
	strb r5, [r0]
	add r0, r0, #3
	strb r5, [r0]
	ldr r0, _08112A8C  @ =0x00000EA5
	add r1, r7, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
	b _08112AC4
_08112A84:
	.4byte 0x00000F62
_08112A88:
	.4byte gUnknown_02010990
_08112A8C:
	.4byte 0x00000EA5
_08112A90:
	ldr r0, _08112A9C  @ =gUnknown_02010992
	ldrb r0, [r0]
	cmp r0, #3
	bne _08112AA4
	ldr r0, _08112AA0  @ =gUnknown_0817D80E
	b _08112AA6
_08112A9C:
	.4byte gUnknown_02010992
_08112AA0:
	.4byte gUnknown_0817D80E
_08112AA4:
	ldr r0, _08112AD0  @ =gUnknown_0817D809
_08112AA6:
	ldrb r1, [r6]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08112AD4  @ =gRam
	ldr r2, _08112AD8  @ =0x00000F92
	add r1, r0, r2
	add r1, r4, r1
	ldr r2, _08112ADC  @ =gUnknown_0817D804
	ldr r3, _08112AE0  @ =0x00000F72
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
_08112AC4:
	strb r0, [r1]
_08112AC6:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08112AD0:
	.4byte gUnknown_0817D809
_08112AD4:
	.4byte gRam
_08112AD8:
	.4byte 0x00000F92
_08112ADC:
	.4byte gUnknown_0817D804
_08112AE0:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_08112848

