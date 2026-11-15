	THUMB_FUNC_START sub_080E52CC
sub_080E52CC: @ 0x080E52CC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080C36D8
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r5, _080E5358  @ =gRam
	ldr r0, _080E535C  @ =0x000016C4
	add r3, r5, r0
	ldr r2, _080E5360  @ =0x00001622
	add r0, r5, r2
	ldrb r2, [r0]
	ldr r4, _080E5364  @ =0x00001623
	add r0, r5, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldrh r4, [r3]
	sub r4, r4, r2
	lsl r4, r4, #16
	lsr r4, r4, #16
	add r0, r6, #0
	bl sub_080E5698
	add r4, r4, #80
	lsl r4, r4, #16
	lsr r4, r4, #16
	cmp r4, #159
	bhi _080E5352
	mov r0, #182
	lsl r0, r0, #5
	add r2, r5, r0
	ldr r1, _080E5368  @ =0x00001624
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r3, _080E536C  @ =0x00001625
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r4, #176
	lsl r4, r4, #15
	add r0, r0, r4
	lsr r0, r0, #16
	cmp r0, #159
	bhi _080E5352
	ldr r0, _080E5370  @ =0x00000F52
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E5374  @ =0x00000FC2
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #24
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #100
	bl sub_080CF140
_080E5352:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E5358:
	.4byte gRam
_080E535C:
	.4byte 0x000016C4
_080E5360:
	.4byte 0x00001622
_080E5364:
	.4byte 0x00001623
_080E5368:
	.4byte 0x00001624
_080E536C:
	.4byte 0x00001625
_080E5370:
	.4byte 0x00000F52
_080E5374:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E52CC

