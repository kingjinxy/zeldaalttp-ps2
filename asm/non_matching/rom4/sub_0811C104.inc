	THUMB_FUNC_START sub_0811C104
sub_0811C104: @ 0x0811C104
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r4, _0811C138  @ =gRam
	ldr r0, _0811C13C  @ =0x00001626
	add r1, r4, r0
	mov r0, #3
	strb r0, [r1]
	ldr r1, _0811C140  @ =0x00001844
	add r0, r4, r1
	add r3, r2, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0811C144
	add r0, r2, #0
	bl sub_0811C17C
	b _0811C174
	.byte 0x00
	.byte 0x00
_0811C138:
	.4byte gRam
_0811C13C:
	.4byte 0x00001626
_0811C140:
	.4byte 0x00001844
_0811C144:
	ldr r1, _0811C160  @ =0x00000E29
	add r0, r4, r1
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	cmp r0, #8
	bne _0811C168
	ldr r1, _0811C164  @ =0x00000E15
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	b _0811C174
	.byte 0x00
	.byte 0x00
_0811C160:
	.4byte 0x00000E29
_0811C164:
	.4byte 0x00000E15
_0811C168:
	strb r0, [r1]
	mov r0, #1
	strb r0, [r3]
	add r0, r5, #0
	bl sub_0811C17C
_0811C174:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0811C104

	.byte 0x00
	.byte 0x00
