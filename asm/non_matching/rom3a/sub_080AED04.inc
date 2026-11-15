	THUMB_FUNC_START sub_080AED04
sub_080AED04: @ 0x080AED04
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	mov r0, #0
	str r0, [sp, #4]
	ldr r1, _080AEEF8  @ =gRam
	ldr r2, _080AEEFC  @ =0x0000183C
	add r0, r1, r2
	add r0, r0, r10
	ldrb r2, [r0]
	ldr r3, _080AEF00  @ =0x00001736
	add r0, r1, r3
	strb r2, [r0]
	mov r5, #3
	mov r9, r5
	add r6, r1, #0
	ldr r0, _080AEF04  @ =gUnknown_02006883
	mov r8, r0
_080AED34:
	ldr r1, _080AEF08  @ =0x00001732
	add r0, r6, r1
	mov r2, r9
	strb r2, [r0]
	ldr r3, _080AEF0C  @ =0x000009AD
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080AED5A
	ldr r5, _080AEF00  @ =0x00001736
	add r0, r6, r5
	ldrb r0, [r0]
	mov r1, r8
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #63
	and r0, r0, r1
	mov r2, r8
	strb r0, [r2]
_080AED5A:
	ldr r0, _080AEF10  @ =gUnknown_02006888
	ldrb r1, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r6, r3
	strb r1, [r0]
	mov r5, r8
	ldrb r1, [r5]
	mov r0, r10
	bl sub_080C06EC
	bl sub_080C0790
	ldr r1, _080AEF14  @ =0x00000964
	add r0, r6, r1
	ldrh r0, [r0]
	add r0, r0, #9
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #129
	lsl r2, r2, #1
	cmp r0, r2
	bhi _080AED9A
	ldr r3, _080AEF18  @ =gUnknown_03002B90
	mov r5, #0
	ldrsh r1, [r3, r5]
	mov r0, #25
	neg r0, r0
	cmp r1, r0
	ble _080AED9A
	cmp r1, #169
	ble _080AED9E
_080AED9A:
	mov r0, #1
	str r0, [sp, #4]
_080AED9E:
	ldr r0, _080AEF1C  @ =gUnknown_03003E74
	mov r1, r9
	sub r1, r1, #3
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080AEF14  @ =0x00000964
	add r7, r6, r1
	ldrh r1, [r7]
	ldr r3, _080AEF18  @ =gUnknown_03002B90
	ldrh r2, [r3]
	ldr r4, _080AEF20  @ =gUnknown_0816E838
	ldr r5, _080AEF08  @ =0x00001732
	add r3, r6, r5
	ldrb r3, [r3]
	add r3, r3, r4
	ldrb r3, [r3]
	add r5, r5, #1
	add r4, r6, r5
	ldrb r4, [r4]
	mov r12, r4
	ldr r5, _080AEF24  @ =gUnknown_03003954
	ldrb r4, [r5]
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	mov r0, #1
	neg r0, r0
	add r8, r8, r0
	add r9, r9, r0
	mov r1, r9
	cmp r1, #0
	bge _080AED34
	add r0, r7, #0
	add r0, r0, #73
	ldrb r3, [r0]
	ldr r2, _080AEF28  @ =0xFFFFF69C
	add r4, r7, r2
	cmp r3, #0
	bne _080AEE3C
	ldr r5, _080AEF2C  @ =0x00000ECE
	add r0, r7, r5
	mov r6, r10
	add r2, r6, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080AEED4
	strb r3, [r2]
	ldr r1, _080AEF30  @ =0x00000ED3
	add r0, r7, r1
	add r0, r0, r10
	ldrb r1, [r0]
	add r1, r1, #1
	mov r2, #3
	and r1, r1, r2
	strb r1, [r0]
	cmp r1, #3
	bne _080AEE3C
	ldr r2, _080AEF34  @ =gUnknown_02006884
	ldr r3, _080AEF38  @ =0x00000DD2
	add r0, r7, r3
	ldrb r0, [r0]
	ldrb r5, [r2]
	add r0, r0, r5
	mov r1, #63
	and r0, r0, r1
	strb r0, [r2]
_080AEE3C:
	ldr r6, _080AEF3C  @ =0x00001837
	add r0, r4, r6
	add r0, r0, r10
	ldrb r0, [r0]
	ldr r2, _080AEF08  @ =0x00001732
	add r1, r4, r2
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	beq _080AEED4
	ldr r0, _080AEF10  @ =gUnknown_02006888
	ldrb r1, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	ldr r0, _080AEF34  @ =gUnknown_02006884
	ldrb r1, [r0]
	mov r0, r10
	bl sub_080C06EC
	bl sub_080C0790
	ldr r5, _080AEF14  @ =0x00000964
	add r0, r4, r5
	ldrh r0, [r0]
	add r0, r0, #9
	lsl r0, r0, #16
	mov r1, #129
	lsl r1, r1, #17
	cmp r0, r1
	bhi _080AEE94
	mov r6, #150
	lsl r6, r6, #4
	add r0, r4, r6
	mov r2, #0
	ldrsh r1, [r0, r2]
	mov r0, #25
	neg r0, r0
	cmp r1, r0
	ble _080AEE94
	cmp r1, #169
	ble _080AEE98
_080AEE94:
	mov r3, #1
	str r3, [sp, #4]
_080AEE98:
	ldr r0, _080AEF1C  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, #3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r4, _080AEEF8  @ =gRam
	ldr r5, _080AEF14  @ =0x00000964
	add r1, r4, r5
	ldrh r1, [r1]
	mov r6, #150
	lsl r6, r6, #4
	add r2, r4, r6
	ldrh r2, [r2]
	ldr r5, _080AEF40  @ =gUnknown_0816E83C
	ldr r6, _080AEF08  @ =0x00001732
	add r3, r4, r6
	ldrb r3, [r3]
	add r3, r3, r5
	ldrb r3, [r3]
	ldr r5, _080AEF44  @ =0x00001724
	add r4, r4, r5
	ldrb r5, [r4]
	mov r4, #4
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
_080AEED4:
	ldr r6, [sp, #4]
	cmp r6, #0
	beq _080AEEE6
	ldr r0, _080AEEF8  @ =gRam
	ldr r1, _080AEF48  @ =0x00000E15
	add r0, r0, r1
	add r0, r0, r10
	mov r1, #0
	strb r1, [r0]
_080AEEE6:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AEEF8:
	.4byte gRam
_080AEEFC:
	.4byte 0x0000183C
_080AEF00:
	.4byte 0x00001736
_080AEF04:
	.4byte gUnknown_02006883
_080AEF08:
	.4byte 0x00001732
_080AEF0C:
	.4byte 0x000009AD
_080AEF10:
	.4byte gUnknown_02006888
_080AEF14:
	.4byte 0x00000964
_080AEF18:
	.4byte gUnknown_03002B90
_080AEF1C:
	.4byte gUnknown_03003E74
_080AEF20:
	.4byte gUnknown_0816E838
_080AEF24:
	.4byte gUnknown_03003954
_080AEF28:
	.4byte 0xFFFFF69C
_080AEF2C:
	.4byte 0x00000ECE
_080AEF30:
	.4byte 0x00000ED3
_080AEF34:
	.4byte gUnknown_02006884
_080AEF38:
	.4byte 0x00000DD2
_080AEF3C:
	.4byte 0x00001837
_080AEF40:
	.4byte gUnknown_0816E83C
_080AEF44:
	.4byte 0x00001724
_080AEF48:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_080AED04

