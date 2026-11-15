	THUMB_FUNC_START sub_0807D3E4
sub_0807D3E4: @ 0x0807D3E4
	push {r4-r6,lr}
	mov r6, #0
	mov r4, #0
	ldr r1, _0807D454  @ =gRam
	ldr r2, _0807D458  @ =0x000009E6
	add r0, r1, r2
	ldrb r0, [r0]
	add r3, r0, #0
	add r5, r1, #0
	cmp r3, #39
	beq _0807D42E
	cmp r3, #60
	beq _0807D42E
	cmp r3, #62
	beq _0807D42E
	sub r0, r0, #41
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #9
	bls _0807D42E
	ldr r1, _0807D45C  @ =0x000009E7
	add r0, r5, r1
	ldrb r0, [r0]
	add r1, r0, #0
	cmp r1, #39
	beq _0807D42A
	cmp r1, #60
	beq _0807D42A
	cmp r1, #62
	beq _0807D42A
	sub r0, r0, #41
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #9
	bhi _0807D44C
_0807D42A:
	mov r6, #1
	add r4, r4, #1
_0807D42E:
	ldr r0, _0807D460  @ =0x00000AA8
	add r2, r5, r0
	ldr r1, _0807D464  @ =gUnknown_081676F2
	lsl r0, r4, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _0807D44C
	ldr r1, _0807D458  @ =0x000009E6
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
_0807D44C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807D454:
	.4byte gRam
_0807D458:
	.4byte 0x000009E6
_0807D45C:
	.4byte 0x000009E7
_0807D460:
	.4byte 0x00000AA8
_0807D464:
	.4byte gUnknown_081676F2
	THUMB_FUNC_END sub_0807D3E4

