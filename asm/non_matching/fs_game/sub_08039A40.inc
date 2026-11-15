	THUMB_FUNC_START sub_08039A40
sub_08039A40: @ 0x08039A40
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08039A64  @ =gUnknown_03006C80
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r1, r2, #0
	lsl r2, r1, #3
	add r0, r0, #40
	add r1, r0, r2
	ldr r0, [r1]
	mov r2, #2
	add r1, r0, #0
	and r1, r1, r2
	add r0, r1, #0
	b _08039A68
	.byte 0x00
	.byte 0x00
_08039A64:
	.4byte gUnknown_03006C80
_08039A68:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08039A40

