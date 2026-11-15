	THUMB_FUNC_START sub_080C6508
sub_080C6508: @ 0x080C6508
	push {r4-r7,lr}
	lsl r0, r0, #16
	lsr r5, r0, #16
	lsl r1, r1, #16
	lsr r6, r1, #16
	lsl r2, r2, #16
	lsr r7, r2, #16
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r12, r3
	mov r1, #1
	neg r1, r1
	ldr r4, _080C6564  @ =gUnknown_03003E6C
	ldrb r0, [r4]
	cmp r0, #30
	bhi _080C655C
	lsl r1, r0, #2
	ldr r3, _080C6568  @ =gRam
	lsl r0, r0, #5
	add r0, r0, r3
	ldr r2, _080C656C  @ =0x00000556
	add r0, r0, r2
	strh r5, [r0]
	add r0, r1, #1
	lsl r0, r0, #3
	add r0, r0, r3
	add r0, r0, r2
	strh r6, [r0]
	add r0, r1, #2
	lsl r0, r0, #3
	add r0, r0, r3
	add r0, r0, r2
	strh r7, [r0]
	add r1, r1, #3
	lsl r1, r1, #3
	add r1, r1, r3
	add r1, r1, r2
	mov r0, r12
	strh r0, [r1]
	ldrb r1, [r4]
	add r0, r1, #1
	strb r0, [r4]
_080C655C:
	add r0, r1, #0
	pop {r4-r7}
	pop {r1}
	bx r1
_080C6564:
	.4byte gUnknown_03003E6C
_080C6568:
	.4byte gRam
_080C656C:
	.4byte 0x00000556
	THUMB_FUNC_END sub_080C6508

