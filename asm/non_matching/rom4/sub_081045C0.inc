	THUMB_FUNC_START sub_081045C0
sub_081045C0: @ 0x081045C0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _081045FC  @ =gRam
	ldr r1, _08104600  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _08104604  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _081045F6
	sub r2, r2, #112
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_081042B4
	ldr r1, _08104608  @ =0x000010E2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #12
	strb r1, [r0]
_081045F6:
	pop {r4,r5}
	pop {r0}
	bx r0
_081045FC:
	.4byte gRam
_08104600:
	.4byte 0x00000F92
_08104604:
	.4byte 0x00000FC2
_08104608:
	.4byte 0x000010E2
	THUMB_FUNC_END sub_081045C0

