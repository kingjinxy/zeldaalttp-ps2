	THUMB_FUNC_START sub_080EF024
sub_080EF024: @ 0x080EF024
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080EF044  @ =gRam
	ldr r2, _080EF048  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #4
	ldr r2, _080EF04C  @ =gUnknown_08178AB0
	add r1, r1, r2
	mov r2, #2
	bl sub_080C9480
	pop {r0}
	bx r0
_080EF044:
	.4byte gRam
_080EF048:
	.4byte 0x00000F92
_080EF04C:
	.4byte gUnknown_08178AB0
	THUMB_FUNC_END sub_080EF024

