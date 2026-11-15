	THUMB_FUNC_START sub_080F7F8C
sub_080F7F8C: @ 0x080F7F8C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F8108
	ldr r5, _080F8024  @ =gRam
	ldr r1, _080F8028  @ =0x00000F92
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #4
	bne _080F7FAA
	b _080F80D8
_080F7FAA:
	ldr r0, _080F802C  @ =0x00000996
	add r2, r5, r0
	ldrb r0, [r2]
	lsr r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r3]
	ldr r3, _080F8030  @ =0x00000F52
	add r1, r5, r3
	add r1, r4, r1
	ldrb r0, [r2]
	lsr r0, r0, #5
	mov r3, #1
	and r0, r0, r3
	strb r0, [r1]
	ldr r0, _080F8034  @ =0x00000F62
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r2]
	add r0, r0, #16
	asr r0, r0, #5
	and r0, r0, r3
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F80D8
	add r0, r4, #0
	bl sub_080F825C
	cmp r0, #0
	bne _080F804E
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F804E
	mov r1, #0
	ldr r2, _080F8038  @ =0x000009DA
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #120
	bne _080F800A
	mov r1, #1
_080F800A:
	cmp r1, #0
	beq _080F8040
	ldr r3, _080F803C  @ =0x000016B3
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #15
	beq _080F804E
	add r0, r4, #0
	bl sub_080F821C
	b _080F804E
_080F8024:
	.4byte gRam
_080F8028:
	.4byte 0x00000F92
_080F802C:
	.4byte 0x00000996
_080F8030:
	.4byte 0x00000F52
_080F8034:
	.4byte 0x00000F62
_080F8038:
	.4byte 0x000009DA
_080F803C:
	.4byte 0x000016B3
_080F8040:
	ldr r0, _080F80E0  @ =gSword
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080F804E
	add r0, r4, #0
	bl sub_080F821C
_080F804E:
	add r0, r4, #0
	bl sub_080C5080
	ldr r4, _080F80E4  @ =gRam
	mov r5, #182
	lsl r5, r5, #5
	add r1, r4, r5
	ldr r2, _080F80E8  @ =0x00001624
	add r0, r4, r2
	ldrb r2, [r0]
	ldr r3, _080F80EC  @ =0x00001625
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	ldrh r1, [r1]
	sub r1, r1, r2
	add r1, r1, #8
	add r5, r5, #4
	add r3, r4, r5
	ldr r2, _080F80F0  @ =0x00001622
	add r0, r4, r2
	ldrb r2, [r0]
	sub r5, r5, #161
	add r0, r4, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	ldrh r0, [r3]
	sub r0, r0, r2
	add r0, r0, #32
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #23
	bhi _080F80D8
	cmp r0, #63
	bhi _080F80D8
	ldr r0, _080F80F4  @ =0x000016CD
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F80D8
	ldr r2, _080F80F8  @ =0x000017F1
	add r1, r4, r2
	mov r2, #0
	mov r0, #64
	strb r0, [r1]
	add r5, r5, #213
	add r1, r4, r5
	mov r0, #12
	strb r0, [r1]
	ldr r0, _080F80FC  @ =0x00001702
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r5, _080F8100  @ =0x00001805
	add r1, r4, r5
	mov r0, #2
	strb r0, [r1]
	ldr r1, _080F8104  @ =0x000016CE
	add r0, r4, r1
	strb r2, [r0]
	mov r0, #48
	strb r0, [r3]
_080F80D8:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080F80E0:
	.4byte gSword
_080F80E4:
	.4byte gRam
_080F80E8:
	.4byte 0x00001624
_080F80EC:
	.4byte 0x00001625
_080F80F0:
	.4byte 0x00001622
_080F80F4:
	.4byte 0x000016CD
_080F80F8:
	.4byte 0x000017F1
_080F80FC:
	.4byte 0x00001702
_080F8100:
	.4byte 0x00001805
_080F8104:
	.4byte 0x000016CE
	THUMB_FUNC_END sub_080F7F8C

