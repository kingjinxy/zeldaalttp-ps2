	THUMB_FUNC_START sub_0800FDD4
sub_0800FDD4: @ 0x0800FDD4
	push {r4,r5,lr}
	mov r0, #200
	lsl r0, r0, #5
	bl sub_0800F97C
	mov r0, #23
	bl load_gfx_group
	ldr r4, _0800FE88  @ =gUnknown_02016D60
	ldrb r0, [r4, #31]
	bl sub_0800F888
	mov r0, #0
	bl sub_08010D1C
	mov r0, #1
	bl sub_08010D1C
	mov r0, #2
	bl sub_08010D1C
	ldr r1, _0800FE8C  @ =gUnknown_030004A0
	mov r5, #0
	mov r2, #0
	mov r0, #224
	lsl r0, r0, #5
	strh r0, [r1, #8]
	ldr r0, _0800FE90  @ =0x00001D01
	strh r0, [r1, #20]
	ldr r0, _0800FE94  @ =0x00001B02
	strh r0, [r1, #32]
	mov r0, #32
	strh r0, [r1, #12]
	ldr r0, _0800FE98  @ =0x0000FFEC
	strh r0, [r1, #34]
	strh r0, [r1, #22]
	sub r0, r0, #20
	strh r0, [r1, #36]
	strh r0, [r1, #24]
	add r3, r1, #0
	add r3, r3, #102
	ldr r0, _0800FE9C  @ =0x00000844
	strh r0, [r3]
	add r1, r1, #104
	sub r0, r0, #56
	strh r0, [r1]
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #4]
	strb r0, [r4, #31]
	add r0, r4, #0
	add r0, r0, #32
	strb r5, [r0]
	str r2, [r4, #8]
	strb r5, [r4, #26]
	mov r0, #255
	strb r0, [r4, #30]
	ldr r0, _0800FEA0  @ =gUnknown_08137EBC
	bl sub_0804C808
	mov r0, #0
	bl sub_08063C5C
	ldrb r1, [r0, #28]
	mov r2, #192
	orr r1, r1, r2
	strb r1, [r0, #28]
	add r0, r0, #32
	mov r1, #128
	strb r1, [r0]
	ldr r1, _0800FEA4  @ =gUnknown_03006A30
	mov r0, #3
	strb r0, [r1, #12]
	add r2, r1, #0
	add r2, r2, #56
	sub r0, r0, #4
	strb r0, [r2]
	add r1, r1, #57
	strb r5, [r1]
	mov r0, #2
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _0800FEA8  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_0800FE88:
	.4byte gUnknown_02016D60
_0800FE8C:
	.4byte gUnknown_030004A0
_0800FE90:
	.4byte 0x00001D01
_0800FE94:
	.4byte 0x00001B02
_0800FE98:
	.4byte 0x0000FFEC
_0800FE9C:
	.4byte 0x00000844
_0800FEA0:
	.4byte gUnknown_08137EBC
_0800FEA4:
	.4byte gUnknown_03006A30
_0800FEA8:
	.4byte gSubState
	THUMB_FUNC_END sub_0800FDD4

