	THUMB_FUNC_START sub_080128EC
sub_080128EC: @ 0x080128EC
	push {r4-r7,lr}
	sub sp, sp, #8
	add r3, r0, #0
	ldr r0, _08012930  @ =gUnknown_03006C80
	ldrb r1, [r0, #2]
	cmp r1, #0
	beq _0801293C
	add r0, r0, #79
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _0801293C
	mov r0, #15
	and r0, r0, r1
	lsl r0, r0, #3
	ldr r1, _08012934  @ =gUnknown_0842B8E4
	add r5, r0, r1
	mov r6, #0
	ldr r2, _08012938  @ =gUnknown_0201F000
_08012914:
	mov r0, sp
	add r1, r0, r6
	ldrb r0, [r5]
	strb r0, [r1]
	add r5, r5, #1
	add r6, r6, #1
	cmp r6, #7
	bls _08012914
	ldr r0, [r2]
	mov r1, #1
	orr r0, r0, r1
	str r0, [r2]
	b _080129AE
	.byte 0x00
	.byte 0x00
_08012930:
	.4byte gUnknown_03006C80
_08012934:
	.4byte gUnknown_0842B8E4
_08012938:
	.4byte gUnknown_0201F000
_0801293C:
	ldr r0, [r3, #20]
	ldr r0, [r0, #24]
	cmp r0, #0
	beq _0801295C
	add r5, r0, #0
	ldrb r4, [r5]
	add r5, r5, #1
	bl sub_0800099C
	add r1, r4, #0
	bl __umodsi3
	add r4, r0, #0
	lsl r0, r4, #3
	add r5, r5, r0
	b _08012960
_0801295C:
	add r5, r3, #0
	add r5, r5, #12
_08012960:
	mov r6, #0
	ldr r2, _08012A10  @ =gUnknown_03006C80
_08012964:
	mov r0, sp
	add r1, r0, r6
	ldrb r0, [r5]
	strb r0, [r1]
	add r5, r5, #1
	add r6, r6, #1
	cmp r6, #7
	bls _08012964
	ldrb r0, [r2, #2]
	cmp r0, #0
	bne _080129AE
	mov r6, #3
	mov r5, sp
	add r5, r5, #6
_08012980:
	bl sub_0800099C
	add r1, r6, #0
	bl __umodsi3
	ldrb r4, [r5]
	lsl r0, r0, #1
	mov r1, sp
	add r2, r1, r0
	ldrb r1, [r2]
	strb r1, [r5]
	strb r4, [r2]
	ldrb r4, [r5, #1]
	add r0, r0, #1
	mov r2, sp
	add r1, r2, r0
	ldrb r0, [r1]
	strb r0, [r5, #1]
	strb r4, [r1]
	sub r5, r5, #2
	sub r6, r6, #1
	cmp r6, #0
	bne _08012980
_080129AE:
	mov r5, sp
	mov r6, #0
	ldr r2, _08012A10  @ =gUnknown_03006C80
	ldrb r0, [r2]
	cmp r6, r0
	bcs _080129E8
	ldr r0, _08012A14  @ =gUnknown_03006A30
	add r4, r2, #0
	add r7, r0, #0
	add r7, r7, #40
_080129C2:
	lsl r0, r6, #24
	lsr r0, r0, #24
	ldrb r1, [r5]
	ldrb r2, [r5, #1]
	bl sub_08012824
	ldr r1, [r7]
	add r0, r4, #0
	add r0, r0, #96
	add r0, r6, r0
	ldrb r0, [r0]
	add r1, r1, #69
	strb r0, [r1]
	add r7, r7, #144
	add r6, r6, #1
	add r5, r5, #2
	ldrb r1, [r4]
	cmp r6, r1
	bcc _080129C2
_080129E8:
	ldr r1, _08012A18  @ =gUnknown_03006D04
	mov r0, sp
	mov r2, #4
	bl CpuSet
	ldr r3, _08012A1C  @ =gUnknown_03000450
	ldr r2, _08012A14  @ =gUnknown_03006A30
	ldr r0, _08012A20  @ =gLCDRegisterBuffer
	ldrb r1, [r0]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	str r0, [r3]
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
_08012A10:
	.4byte gUnknown_03006C80
_08012A14:
	.4byte gUnknown_03006A30
_08012A18:
	.4byte gUnknown_03006D04
_08012A1C:
	.4byte gUnknown_03000450
_08012A20:
	.4byte gLCDRegisterBuffer
	THUMB_FUNC_END sub_080128EC

