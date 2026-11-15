	THUMB_FUNC_START sub_0805A64C
sub_0805A64C: @ 0x0805A64C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	mov r2, #58
	ldrsh r1, [r0, r2]
	mov r0, #32
	cmn r1, r0
	beq _0805A674
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	ldr r3, _0805A670  @ =0xFFFF8000
	add r1, r2, r3
	str r1, [r0, #56]
	b _0805A696
	.byte 0x00
	.byte 0x00
_0805A670:
	.4byte 0xFFFF8000
_0805A674:
	ldr r1, _0805A6A4  @ =0x00000101
	add r0, r1, #0
	bl sub_0800D6A4
	ldr r0, [r7]
	ldr r1, _0805A6A8  @ =0x00000A8C
	str r1, [r0, #104]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_0805A696:
	ldr r0, [r7]
	bl sub_0805AD74
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0805A6A4:
	.4byte 0x00000101
_0805A6A8:
	.4byte 0x00000A8C
	THUMB_FUNC_END sub_0805A64C

