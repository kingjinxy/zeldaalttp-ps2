	THUMB_FUNC_START sub_080D98F4
sub_080D98F4: @ 0x080D98F4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D9924  @ =gRam
	ldr r2, _080D9928  @ =0x00000F92
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #0
	strb r2, [r1]
	ldr r2, _080D992C  @ =gUnknown_03003E74
	ldrh r1, [r2]
	add r1, r1, #4
	strh r1, [r2]
	ldr r1, _080D9930  @ =0x00001052
	add r3, r3, r1
	add r3, r0, r3
	ldrb r1, [r3]
	sub r1, r1, #40
	lsl r1, r1, #24
	lsr r1, r1, #24
	bl sub_080D93DC
	pop {r0}
	bx r0
_080D9924:
	.4byte gRam
_080D9928:
	.4byte 0x00000F92
_080D992C:
	.4byte gUnknown_03003E74
_080D9930:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080D98F4

