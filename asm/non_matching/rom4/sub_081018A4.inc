	THUMB_FUNC_START sub_081018A4
sub_081018A4: @ 0x081018A4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _081018EC  @ =gRam
	ldr r0, _081018F0  @ =0x00001172
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C36D8
	ldr r1, _081018F4  @ =0x0000097D
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _081018E4
	ldr r0, _081018F8  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081018FC  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
_081018E4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081018EC:
	.4byte gRam
_081018F0:
	.4byte 0x00001172
_081018F4:
	.4byte 0x0000097D
_081018F8:
	.4byte 0x00000F52
_081018FC:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_081018A4

