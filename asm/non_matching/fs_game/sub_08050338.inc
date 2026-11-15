	THUMB_FUNC_START sub_08050338
sub_08050338: @ 0x08050338
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #120
	ldr r2, _08050384  @ =gUnknown_08137B90
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	mov r5, #3
	add r3, r4, #0
	and r3, r3, r5
	add r5, r3, #0
	lsl r4, r5, #24
	lsr r3, r4, #24
	add r4, r3, #0
	lsl r3, r4, #1
	add r2, r2, r3
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08050388  @ =gUnknown_0200B320
	add r2, r7, #4
	ldrh r1, [r2]
	add r2, r0, #0
	ldr r2, _0805038C  @ =0x00002004
	add r0, r0, r2
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #24
	beq _08050390
	mov r0, #1
	b _08050394
	.byte 0x00
	.byte 0x00
_08050384:
	.4byte gUnknown_08137B90
_08050388:
	.4byte gUnknown_0200B320
_0805038C:
	.4byte 0x00002004
_08050390:
	mov r0, #0
	b _08050394
_08050394:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08050338

