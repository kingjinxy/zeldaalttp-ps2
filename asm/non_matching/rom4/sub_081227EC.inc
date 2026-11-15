	THUMB_FUNC_START sub_081227EC
sub_081227EC: @ 0x081227EC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08122868  @ =gRam
	ldr r4, _0812286C  @ =0x00000E1F
	add r2, r3, r4
	add r2, r0, r2
	mov r4, #0
	strb r1, [r2]
	ldr r2, _08122870  @ =0x00000DED
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	add r2, r2, #60
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r2, _08122874  @ =0x00001844
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r2, _08122878  @ =0x00000DF7
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #56
	strb r2, [r1]
	ldr r2, _0812287C  @ =0x00001832
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #3
	strb r2, [r1]
	ldr r2, _08122880  @ =0x00001813
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	add r2, r2, #20
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	mov r4, #182
	lsl r4, r4, #5
	add r1, r3, r4
	ldrh r1, [r1]
	sub r1, r1, #8
	mov r4, #150
	lsl r4, r4, #4
	add r2, r3, r4
	strh r1, [r2]
	ldr r2, _08122884  @ =0x00000952
	add r1, r3, r2
	ldrh r1, [r1]
	sub r1, r1, #16
	add r4, r4, #4
	add r3, r3, r4
	strh r1, [r3]
	bl sub_080ABA78
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08122868:
	.4byte gRam
_0812286C:
	.4byte 0x00000E1F
_08122870:
	.4byte 0x00000DED
_08122874:
	.4byte 0x00001844
_08122878:
	.4byte 0x00000DF7
_0812287C:
	.4byte 0x00001832
_08122880:
	.4byte 0x00001813
_08122884:
	.4byte 0x00000952
	THUMB_FUNC_END sub_081227EC

