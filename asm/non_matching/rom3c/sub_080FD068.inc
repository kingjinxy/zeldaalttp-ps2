	THUMB_FUNC_START sub_080FD068
sub_080FD068: @ 0x080FD068
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080FD090  @ =gRam
	ldr r2, _080FD094  @ =0x00001052
	add r1, r1, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #15
	and r1, r1, r0
	cmp r1, #0
	bne _080FD08C
	mov r0, #13
	mov r1, #0
	bl sub_0812A324
_080FD08C:
	pop {r0}
	bx r0
_080FD090:
	.4byte gRam
_080FD094:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080FD068

