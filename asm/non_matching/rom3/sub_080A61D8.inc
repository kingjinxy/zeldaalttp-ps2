	THUMB_FUNC_START sub_080A61D8
sub_080A61D8: @ 0x080A61D8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	bl sub_080A6170
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080A61F0
	b _080A641E
_080A61F0:
	ldr r2, _080A642C  @ =gRam
	ldr r1, _080A6430  @ =0x00000964
	add r0, r2, r1
	ldrh r0, [r0]
	mov r9, r0
	ldr r3, _080A6434  @ =0x00000961
	add r1, r2, r3
	ldr r0, _080A6438  @ =gUnknown_0816A0EC
	add r0, r0, r9
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	add r3, r3, #20
	add r1, r2, r3
	mov r4, #0
	strb r0, [r1]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	ldr r0, _080A643C  @ =gUnknown_0816A2F1
	add r0, r0, r9
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	sub r3, r3, #1
	add r1, r2, r3
	strb r0, [r1]
	sub r3, r3, #4
	add r1, r2, r3
	strb r0, [r1]
	ldr r1, _080A6440  @ =0x0000097C
	add r0, r2, r1
	strb r4, [r0]
	add r3, r3, #13
	add r0, r2, r3
	strb r4, [r0]
	ldr r0, _080A6444  @ =0x0000096C
	add r3, r2, r0
	ldrh r0, [r3]
	lsl r1, r0, #1
	add r0, r0, r1
	lsl r0, r0, #17
	lsr r0, r0, #16
	mov r9, r0
	strh r4, [r3]
	ldr r0, _080A6448  @ =gUnknown_0816B300
	ldr r1, [r0]
	ldr r3, _080A644C  @ =0x00000968
	add r0, r2, r3
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080A6450  @ =gUnknown_03003E74
	ldrh r0, [r0]
	lsl r0, r0, #2
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	add r6, r2, #0
	ldr r0, _080A6454  @ =0x00000978
	add r0, r0, r6
	mov r10, r0
_080A626E:
	ldr r0, _080A6458  @ =gUnknown_0816952E
	mov r2, r9
	lsr r1, r2, #1
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r3, [r1]
	ldr r0, _080A645C  @ =0x0000FFFF
	cmp r3, r0
	bne _080A6282
	b _080A63D6
_080A6282:
	ldr r1, _080A6460  @ =0x0000CFFF
	add r0, r1, #0
	and r3, r3, r0
	ldr r4, _080A642C  @ =gRam
	ldr r2, _080A6464  @ =0x00001723
	add r0, r4, r2
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	orr r3, r3, r1
	lsl r0, r3, #16
	lsr r3, r0, #16
	add r2, r3, #0
	mov r0, #224
	lsl r0, r0, #4
	add r1, r0, #0
	add r0, r3, #0
	and r0, r0, r1
	mov r1, #128
	lsl r1, r1, #2
	cmp r0, r1
	beq _080A62CE
	ldr r1, _080A6468  @ =0x000017D6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080A62CE
	ldr r2, _080A646C  @ =0x0000F1FF
	add r0, r2, #0
	add r2, r3, #0
	and r2, r2, r0
	mov r3, #192
	lsl r3, r3, #3
	add r0, r3, #0
	orr r2, r2, r0
_080A62CE:
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	orr r2, r2, r0
	mov r0, r8
	add r1, r2, #0
	bl sub_080A452C
	ldr r2, _080A642C  @ =gRam
	ldr r3, _080A6470  @ =0x00000974
	add r0, r2, r3
	ldrb r5, [r0]
	ldr r1, _080A6474  @ =0x00000975
	add r0, r2, r1
	ldrb r7, [r0]
	mov r2, r8
	lsr r1, r2, #2
	lsl r0, r1, #3
	ldr r2, _080A6478  @ =gUnknown_03002780
	add r3, r0, r2
	ldr r0, _080A647C  @ =gUnknown_03003E68
	ldrb r0, [r0]
	mov r12, r1
	cmp r0, #0
	bne _080A6328
	ldr r0, _080A6480  @ =0x000001FF
	add r4, r0, #0
	ldrh r0, [r3, #2]
	ldr r6, _080A6484  @ =0xFFFFFE00
	add r2, r6, #0
	and r2, r2, r0
	orr r2, r2, r5
	strh r2, [r3, #2]
	strb r7, [r3]
	cmp r5, #240
	bls _080A6328
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r4
	and r2, r2, r6
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A6328:
	ldr r2, _080A642C  @ =gRam
	ldr r1, _080A6470  @ =0x00000974
	add r0, r2, r1
	ldrh r0, [r0]
	ldr r1, _080A6488  @ =0x00001734
	add r3, r2, r1
	strb r0, [r3]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	mov r4, #255
	ldrb r1, [r0]
	ldrb r0, [r3]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r3, r1, #16
	add r6, r2, #0
	cmp r1, #0
	bge _080A6356
	eor r3, r3, r4
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
_080A6356:
	cmp r3, #127
	bls _080A6364
	mov r2, r10
	ldrh r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strh r0, [r2]
_080A6364:
	mov r3, r10
	ldrh r1, [r3]
	mov r2, r12
	lsl r0, r2, #3
	ldr r3, _080A6478  @ =gUnknown_03002780
	add r4, r0, r3
	lsr r1, r1, #1
	lsl r1, r1, #6
	ldrb r2, [r4, #3]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #3]
	mov r0, r10
	ldrh r1, [r0]
	mov r0, #254
	and r0, r0, r1
	mov r1, r10
	strh r0, [r1]
	ldr r2, _080A648C  @ =0x000015DC
	add r5, r6, r2
	ldrb r0, [r5]
	ldr r3, _080A6490  @ =0x000010C2
	add r2, r6, r3
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A63CC
	ldrb r1, [r4, #5]
	mov r0, #15
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r4, #5]
	ldrh r3, [r4, #2]
	lsl r1, r3, #23
	lsr r1, r1, #23
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r2, _080A6480  @ =0x000001FF
	add r0, r2, #0
	and r1, r1, r0
	ldr r2, _080A6484  @ =0xFFFFFE00
	add r0, r2, #0
	and r3, r3, r0
	orr r3, r3, r1
	strh r3, [r4, #2]
_080A63CC:
	mov r0, r8
	add r0, r0, #4
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
_080A63D6:
	ldr r0, _080A642C  @ =gRam
	ldr r1, _080A6470  @ =0x00000974
	add r3, r0, r1
	ldrb r0, [r3]
	add r0, r0, #8
	strb r0, [r3]
	mov r0, r9
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	ldr r0, _080A642C  @ =gRam
	sub r1, r1, #8
	add r2, r0, r1
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080A6414
	ldr r0, _080A6474  @ =0x00000975
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r6, r1
	ldrb r0, [r0]
	strb r0, [r3]
_080A6414:
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #3
	beq _080A641E
	b _080A626E
_080A641E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080A642C:
	.4byte gRam
_080A6430:
	.4byte 0x00000964
_080A6434:
	.4byte 0x00000961
_080A6438:
	.4byte gUnknown_0816A0EC
_080A643C:
	.4byte gUnknown_0816A2F1
_080A6440:
	.4byte 0x0000097C
_080A6444:
	.4byte 0x0000096C
_080A6448:
	.4byte gUnknown_0816B300
_080A644C:
	.4byte 0x00000968
_080A6450:
	.4byte gUnknown_03003E74
_080A6454:
	.4byte 0x00000978
_080A6458:
	.4byte gUnknown_0816952E
_080A645C:
	.4byte 0x0000FFFF
_080A6460:
	.4byte 0x0000CFFF
_080A6464:
	.4byte 0x00001723
_080A6468:
	.4byte 0x000017D6
_080A646C:
	.4byte 0x0000F1FF
_080A6470:
	.4byte 0x00000974
_080A6474:
	.4byte 0x00000975
_080A6478:
	.4byte gUnknown_03002780
_080A647C:
	.4byte gUnknown_03003E68
_080A6480:
	.4byte 0x000001FF
_080A6484:
	.4byte 0xFFFFFE00
_080A6488:
	.4byte 0x00001734
_080A648C:
	.4byte 0x000015DC
_080A6490:
	.4byte 0x000010C2
	THUMB_FUNC_END sub_080A61D8

