	THUMB_FUNC_START sub_0810732C
sub_0810732C: @ 0x0810732C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _08107360  @ =gRam
	ldr r1, _08107364  @ =0x00001052
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #7
	and r1, r1, r0
	cmp r1, #0
	bne _08107358
	add r0, r4, #0
	mov r1, #37
	bl sub_080CF0AC
	add r0, r4, #0
	mov r1, #29
	bl sub_08106FA4
_08107358:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08107360:
	.4byte gRam
_08107364:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810732C

