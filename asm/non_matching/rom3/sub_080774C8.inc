	THUMB_FUNC_START sub_080774C8
sub_080774C8: @ 0x080774C8
	push {r4-r6,lr}
	mov r3, #2
	ldr r0, _08077554  @ =gRam
	ldr r2, _08077558  @ =0x000009C6
	add r1, r0, r2
	ldrb r1, [r1]
	mov r2, #63
	and r2, r2, r1
	add r6, r0, #0
	cmp r2, #3
	beq _080774E8
	cmp r2, #5
	beq _080774E8
	cmp r2, #7
	beq _080774E8
	mov r3, #0
_080774E8:
	add r4, r6, #0
	ldr r1, _08077558  @ =0x000009C6
	add r0, r4, r1
	ldrh r1, [r0]
	mov r5, #64
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08077500
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
_08077500:
	ldr r2, _0807755C  @ =0x00000CAB
	add r0, r4, r2
	mov r1, #0
	strb r3, [r0]
	sub r2, r2, #11
	add r0, r4, r2
	strh r1, [r0]
	bl sub_08130030
	bl sub_08133244
	bl sub_0813309C
	bl sub_081300EC
	bl sub_081330EC
	bl sub_08133148
	bl sub_081302F0
	ldr r1, _08077560  @ =0x0000165C
	add r0, r4, r1
	ldrh r1, [r0]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #1
	cmp r0, #0
	beq _0807753C
	mov r1, #3
_0807753C:
	ldr r2, _08077564  @ =0x00000CA4
	add r0, r6, r2
	strb r1, [r0]
	bl sub_08133034
	bl sub_08130384
	bl sub_081305E0
	pop {r4-r6}
	pop {r0}
	bx r0
_08077554:
	.4byte gRam
_08077558:
	.4byte 0x000009C6
_0807755C:
	.4byte 0x00000CAB
_08077560:
	.4byte 0x0000165C
_08077564:
	.4byte 0x00000CA4
	THUMB_FUNC_END sub_080774C8

