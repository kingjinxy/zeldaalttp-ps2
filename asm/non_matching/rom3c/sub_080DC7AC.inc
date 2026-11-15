	THUMB_FUNC_START sub_080DC7AC
sub_080DC7AC: @ 0x080DC7AC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080DC7D0  @ =gRam
	ldr r2, _080DC7D4  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	mov r1, #1
	and r1, r1, r2
	lsl r1, r1, #5
	ldr r2, _080DC7D8  @ =gUnknown_081760DC
	add r1, r1, r2
	mov r2, #4
	bl sub_080C9480
	pop {r0}
	bx r0
_080DC7D0:
	.4byte gRam
_080DC7D4:
	.4byte 0x00000F92
_080DC7D8:
	.4byte gUnknown_081760DC
	THUMB_FUNC_END sub_080DC7AC

