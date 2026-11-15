	THUMB_FUNC_START sub_08043A34
sub_08043A34: @ 0x08043A34
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #100]
	sub r2, r3, #1
	add r1, r2, #0
	str r1, [r0, #100]
	mov r0, #1
	cmn r1, r0
	bne _08043A52
	b _08043B80
_08043A52:
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	bne _08043A86
	ldr r0, [r7]
	bl 0x0800402C
_08043A86:
	ldr r0, [r7]
	bl sub_0803F0E4
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, [r7, #4]
	ldr r3, [r7]
	mov r4, #50
	ldrsh r2, [r3, r4]
	ldr r3, _08043B70  @ =gUnknown_03000450
	ldrh r4, [r3, #24]
	sub r3, r2, r4
	asr r2, r3, #4
	ldr r4, [r7]
	mov r5, #54
	ldrsh r3, [r4, r5]
	ldr r4, _08043B70  @ =gUnknown_03000450
	ldrh r5, [r4, #26]
	sub r3, r3, r5
	asr r4, r3, #4
	lsl r3, r4, #6
	orr r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, #4
	add r2, r1, r2
	ldrh r1, [r2]
	lsl r2, r1, #21
	lsr r1, r2, #21
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r3, r2, #0
	lsl r1, r3, #1
	add r2, r0, #0
	ldr r2, _08043B74  @ =0x00005004
	add r0, r0, r2
	add r1, r0, r1
	ldrh r0, [r1]
	ldr r1, _08043B78  @ =0x08008840
	bl 0x080012CC
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08043B34
	ldr r0, [r7]
	bl 0x0800935C
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #70
	beq _08043B34
	ldr r1, _08043B7C  @ =0x08003538
	ldr r0, [r7]
	ldrh r2, [r0, #50]
	ldr r0, [r7]
	ldrh r3, [r0, #54]
	ldr r0, [r7]
	bl 0x08003748
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08043B34
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	mov r1, #25
	mov r2, #0
	bl sub_0804CB38
	ldr r0, [r7]
	bl DeleteThisEntity
_08043B34:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	cmp r0, #0
	beq _08043B56
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	mov r1, #25
	mov r2, #0
	bl sub_0804CB38
	ldr r0, [r7]
	bl DeleteThisEntity
_08043B56:
	ldr r0, [r7]
	mov r1, #12
	bl 0x080017E0
	cmp r0, #0
	beq _08043B6E
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
_08043B6E:
	b _08043B8C
_08043B70:
	.4byte gUnknown_03000450
_08043B74:
	.4byte 0x00005004
_08043B78:
	.4byte 0x08008840
_08043B7C:
	.4byte 0x08003538
_08043B80:
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
_08043B8C:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08043A34

