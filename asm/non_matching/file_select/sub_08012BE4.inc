	THUMB_FUNC_START sub_08012BE4
sub_08012BE4: @ 0x08012BE4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _08012C7C  @ =gUnknown_02030A60
	mov r0, #0
	strb r0, [r1]
	ldr r0, _08012C80  @ =gUnknown_0201F000
	mov r1, #0
	str r1, [r0, #16]
	str r1, [r0, #12]
	str r1, [r0, #8]
	str r1, [r0, #4]
	str r1, [r0]
	ldr r0, _08012C84  @ =gUnknown_0200B314
	strb r1, [r0]
	mov r4, #0
	ldr r2, _08012C88  @ =gUnknown_02000430
_08012C0A:
	add r0, r4, r2
	strb r1, [r0]
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #7
	bls _08012C0A
	mov r4, #0
	ldr r2, _08012C8C  @ =gUnknown_0202A760
	mov r1, #0
_08012C1E:
	add r0, r4, r2
	strb r1, [r0]
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #3
	bls _08012C1E
	mov r4, #0
	ldr r2, _08012C90  @ =gUnknown_02016330
	mov r1, #0
_08012C32:
	lsl r0, r4, #2
	add r0, r0, r2
	str r1, [r0]
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #4
	bls _08012C32
	bl sub_08013DE0
	bl sub_08012FA8
	bl sub_080133D0
	bl sub_08016084
	ldr r1, _08012C94  @ =gUnknown_03006C80
	ldrb r0, [r1, #2]
	mov r2, #4
	cmp r0, #0
	bne _08012C5E
	ldrb r2, [r1, #1]
_08012C5E:
	strb r2, [r1, #7]
	ldr r0, _08012C7C  @ =gUnknown_02030A60
	ldrb r0, [r0]
	cmp r0, #0
	beq _08012CA0
	ldr r1, _08012C98  @ =gUnknown_02000028
	ldr r0, _08012C9C  @ =gUnknown_03000204
	ldrb r0, [r0]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bl 0x08008ED8
	b _08012E9C
	.byte 0x00
	.byte 0x00
_08012C7C:
	.4byte gUnknown_02030A60
_08012C80:
	.4byte gUnknown_0201F000
_08012C84:
	.4byte gUnknown_0200B314
_08012C88:
	.4byte gUnknown_02000430
_08012C8C:
	.4byte gUnknown_0202A760
_08012C90:
	.4byte gUnknown_02016330
_08012C94:
	.4byte gUnknown_03006C80
_08012C98:
	.4byte gUnknown_02000028
_08012C9C:
	.4byte gUnknown_03000204
_08012CA0:
	mov r4, #0
	ldr r5, _08012E28  @ =0x03000030
_08012CA4:
	ldr r0, _08012E2C  @ =gUnknown_0202A760
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08012CCC
	lsl r0, r4, #6
	ldr r2, _08012E30  @ =0x06004240
	add r0, r0, r2
	ldr r2, _08012E34  @ =gUnknown_0842761C
	ldrb r1, [r1]
	add r1, r1, r2
	ldrb r2, [r1]
	lsl r2, r2, #6
	ldr r1, _08012E38  @ =0x00044520
	add r2, r2, r1
	ldr r1, [r5]
	add r1, r1, r2
	mov r2, #64
	bl 0x080009F4
_08012CCC:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #3
	bls _08012CA4
	ldr r7, _08012E3C  @ =gUnknown_03006C80
	ldrb r0, [r7, #1]
	cmp r0, #1
	beq _08012D0A
	ldr r6, _08012E28  @ =0x03000030
	ldr r5, _08012E40  @ =gLCDRegisterBuffer
	ldrb r1, [r5]
	lsl r1, r1, #7
	ldr r4, _08012E44  @ =0x00044920
	add r1, r1, r4
	ldr r0, [r6]
	add r0, r0, r1
	ldr r1, _08012E48  @ =0x06004C00
	mov r2, #16
	bl CpuFastSet
	ldrb r1, [r5]
	lsl r1, r1, #7
	add r1, r1, r4
	ldr r0, [r6]
	add r0, r0, r1
	add r0, r0, #64
	ldr r1, _08012E4C  @ =0x06005000
	mov r2, #16
	bl CpuFastSet
_08012D0A:
	bl 0x0800099C
	ldrb r1, [r7]
	bl __umodsi3
	add r0, r0, #15
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	bl 0x0800099C
	ldrb r1, [r7]
	bl __umodsi3
	mov r2, #187
	lsl r2, r2, #1
	add r0, r0, r2
	lsl r0, r0, #16
	lsr r6, r0, #16
	mov r0, #1
	mov r8, r0
_08012D34:
	mov r7, #0
	mov r1, r8
	lsl r1, r1, #4
	mov r10, r1
_08012D3C:
	mov r2, r10
	lsl r0, r2, #2
	orr r0, r0, r7
	lsl r0, r0, #16
	lsr r5, r0, #16
	add r0, r5, #0
	mov r1, #128
	lsl r1, r1, #7
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r4, #21
	bne _08012D64
	mov r0, r9
	add r1, r5, #0
	mov r2, #128
	lsl r2, r2, #7
	bl sub_080144F0
_08012D64:
	mov r0, #189
	lsl r0, r0, #1
	cmp r4, r0
	bne _08012D78
	add r0, r6, #0
	add r1, r5, #0
	mov r2, #128
	lsl r2, r2, #7
	bl sub_080144F0
_08012D78:
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08012A50
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08012A94
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08012B04
	add r0, r5, #0
	mov r1, #128
	lsl r1, r1, #8
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08012A94
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #63
	bls _08012D3C
	mov r0, r8
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	cmp r0, #63
	bls _08012D34
	mov r0, #1
	mov r8, r0
	mov r4, #128
	lsl r4, r4, #7
_08012DC6:
	mov r7, #0
	mov r1, #1
	add r1, r1, r8
	mov r10, r1
	mov r2, r8
	lsl r2, r2, #6
	mov r8, r2
_08012DD4:
	add r0, r7, #0
	mov r1, r8
	orr r0, r0, r1
	lsl r0, r0, #16
	lsr r5, r0, #16
	add r0, r5, #0
	add r1, r4, #0
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	mov r1, r9
	sub r1, r1, #15
	lsl r0, r1, #16
	lsr r0, r0, #16
	cmp r0, #3
	bhi _08012E5A
	ldr r0, _08012E40  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	cmp r1, r0
	beq _08012E5A
	add r0, r5, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r4, #0
	bl 0x08009380
	lsl r0, r0, #16
	lsr r6, r0, #16
	cmp r6, #66
	beq _08012E1A
	cmp r6, #6
	bne _08012E50
_08012E1A:
	mov r0, #19
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080144F0
	b _08012E5A
	.byte 0x00
	.byte 0x00
_08012E28:
	.4byte 0x03000030
_08012E2C:
	.4byte gUnknown_0202A760
_08012E30:
	.4byte 0x06004240
_08012E34:
	.4byte gUnknown_0842761C
_08012E38:
	.4byte 0x00044520
_08012E3C:
	.4byte gUnknown_03006C80
_08012E40:
	.4byte gLCDRegisterBuffer
_08012E44:
	.4byte 0x00044920
_08012E48:
	.4byte 0x06004C00
_08012E4C:
	.4byte 0x06005000
_08012E50:
	mov r0, #20
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080144F0
_08012E5A:
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #63
	bls _08012DD4
	mov r2, r10
	lsl r0, r2, #24
	lsr r0, r0, #24
	mov r8, r0
	cmp r0, #63
	bls _08012DC6
	mov r0, #0
	bl sub_08012B44
	mov r0, #1
	bl sub_08012B44
	mov r0, #0
	bl sub_08012B64
	mov r0, #1
	bl sub_08012B64
	bl sub_08013A10
	ldr r1, _08012EAC  @ =gUnknown_02000028
	ldr r0, _08012EB0  @ =gUnknown_03000204
	ldrb r0, [r0]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bl 0x08008ED8
_08012E9C:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08012EAC:
	.4byte gUnknown_02000028
_08012EB0:
	.4byte gUnknown_03000204
	THUMB_FUNC_END sub_08012BE4

