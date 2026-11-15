	THUMB_FUNC_START sub_0801C8F0
sub_0801C8F0: @ 0x0801C8F0
	push {r4,r5,lr}
	add r4, r0, #0
	bl 0x08003828
	add r5, r4, #0
	add r5, r5, #42
	ldrb r0, [r5]
	cmp r0, #2
	beq _0801C912
	ldr r0, _0801C938  @ =0x0000FFFC
	strh r0, [r4, #58]
	mov r0, #2
	strb r0, [r5]
	add r0, r4, #0
	mov r1, #2
	bl 0x08003870
_0801C912:
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	ldr r0, [r4, #16]
	cmp r0, #0
	bge _0801C932
	mov r0, #5
	strb r0, [r4, #20]
	mov r0, #3
	strb r0, [r5]
	add r0, r4, #0
	mov r1, #3
	bl 0x08003870
_0801C932:
	pop {r4,r5}
	pop {r0}
	bx r0
_0801C938:
	.4byte 0x0000FFFC
	THUMB_FUNC_END sub_0801C8F0

