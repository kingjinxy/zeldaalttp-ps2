	THUMB_FUNC_START sub_08015AC4
sub_08015AC4: @ 0x08015AC4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	ldr r0, _08015AE4  @ =gUnknown_03000450
	ldrh r1, [r0, #40]
	lsr r1, r1, #4
	mov r9, r1
	ldrh r0, [r0, #42]
	lsr r0, r0, #4
	str r0, [sp]
	mov r5, #0
	mov r0, #0
	b _08015C4C
_08015AE4:
	.4byte gUnknown_03000450
_08015AE8:
	mov r1, #0
	add r0, r0, #1
	str r0, [sp, #8]
	cmp r1, r9
	bcc _08015AF4
	b _08015C3A
_08015AF4:
	ldr r2, _08015B80  @ =0x0000FFFF
	mov r8, r2
_08015AF8:
	mov r2, #0
	ldr r4, _08015B84  @ =gUnknown_0813821E
	ldrh r0, [r4]
	add r1, r1, #1
	str r1, [sp, #12]
	add r1, r5, #1
	str r1, [sp, #4]
	cmp r0, r8
	beq _08015B98
	mov r7, #128
	lsl r7, r7, #8
	mov r0, #0
	mov r10, r0
	mov r0, #252
	lsl r0, r0, #4
	add r1, r0, #0
	add r0, r5, #0
	and r0, r0, r1
	lsr r0, r0, #2
	add r6, r0, #0
	add r6, r6, #8
_08015B22:
	add r0, r5, #0
	add r1, r7, #0
	str r2, [sp, #16]
	bl sub_0800932C
	ldrh r1, [r4]
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, [sp, #16]
	cmp r1, r0
	bne _08015B90
	bl sub_080123E8
	add r2, r0, #0
	cmp r2, #0
	beq _08015C28
	ldrh r0, [r4, #2]
	strb r0, [r2, #8]
	ldrh r0, [r4, #4]
	strb r0, [r2, #9]
	ldrh r0, [r4, #6]
	strb r0, [r2, #10]
	ldrh r0, [r4, #6]
	lsr r0, r0, #8
	strb r0, [r2, #11]
	mov r0, #63
	and r5, r5, r0
	lsl r0, r5, #4
	add r0, r0, #8
	strh r0, [r2, #50]
	strh r6, [r2, #54]
	ldr r0, _08015B88  @ =gUnknown_03000450
	ldrh r0, [r0, #18]
	add r1, r7, #0
	orr r1, r1, r0
	add r0, r2, #0
	add r0, r0, #80
	strh r1, [r0]
	ldr r1, _08015B8C  @ =gUnknown_081380F8
	ldrb r0, [r2, #8]
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r2, #0
	bl sub_08012728
	b _08015C28
	.byte 0x00
	.byte 0x00
_08015B80:
	.4byte 0x0000FFFF
_08015B84:
	.4byte gUnknown_0813821E
_08015B88:
	.4byte gUnknown_03000450
_08015B8C:
	.4byte gUnknown_081380F8
_08015B90:
	add r4, r4, #8
	ldrh r0, [r4]
	cmp r0, r8
	bne _08015B22
_08015B98:
	cmp r2, #0
	bne _08015C28
	ldr r4, _08015C14  @ =gUnknown_081381BC
	ldrh r0, [r4]
	cmp r0, r8
	beq _08015C28
	mov r7, #128
	lsl r7, r7, #7
	mov r1, #0
	mov r10, r1
	mov r2, #252
	lsl r2, r2, #4
	add r1, r2, #0
	add r0, r5, #0
	and r0, r0, r1
	lsr r0, r0, #2
	add r6, r0, #0
	add r6, r6, #8
_08015BBC:
	add r0, r5, #0
	add r1, r7, #0
	bl sub_0800932C
	ldrh r1, [r4]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r1, r0
	bne _08015C20
	bl sub_080123E8
	add r2, r0, #0
	cmp r2, #0
	beq _08015C28
	ldrh r0, [r4, #2]
	strb r0, [r2, #8]
	ldrh r0, [r4, #4]
	strb r0, [r2, #9]
	ldrh r0, [r4, #6]
	strb r0, [r2, #10]
	ldrh r0, [r4, #6]
	lsr r0, r0, #8
	strb r0, [r2, #11]
	mov r0, #63
	and r5, r5, r0
	lsl r0, r5, #4
	add r0, r0, #8
	strh r0, [r2, #50]
	strh r6, [r2, #54]
	ldr r0, _08015C18  @ =gUnknown_03000450
	ldrh r0, [r0, #18]
	add r1, r7, #0
	orr r1, r1, r0
	add r0, r2, #0
	add r0, r0, #80
	strh r1, [r0]
	ldr r1, _08015C1C  @ =gUnknown_081380F8
	ldrb r0, [r2, #8]
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r2, #0
	bl sub_08012728
	b _08015C28
_08015C14:
	.4byte gUnknown_081381BC
_08015C18:
	.4byte gUnknown_03000450
_08015C1C:
	.4byte gUnknown_081380F8
_08015C20:
	add r4, r4, #8
	ldrh r0, [r4]
	cmp r0, r8
	bne _08015BBC
_08015C28:
	ldr r1, [sp, #12]
	lsl r0, r1, #16
	lsr r1, r0, #16
	ldr r2, [sp, #4]
	lsl r0, r2, #16
	lsr r5, r0, #16
	cmp r1, r9
	bcs _08015C3A
	b _08015AF8
_08015C3A:
	add r0, r5, #0
	add r0, r0, #64
	mov r1, r9
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r5, r0, #16
	ldr r2, [sp, #8]
	lsl r0, r2, #16
	lsr r0, r0, #16
_08015C4C:
	ldr r1, [sp]
	cmp r0, r1
	bcs _08015C54
	b _08015AE8
_08015C54:
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08015AC4

