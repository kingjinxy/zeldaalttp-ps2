	THUMB_FUNC_START sub_08102C50
sub_08102C50: @ 0x08102C50
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _08102CA2
	add r0, r5, #0
	bl sub_08102AE8
	ldr r4, _08102CAC  @ =gUnknown_03003E74
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldr r0, _08102CB0  @ =gRam
	ldr r1, _08102CB4  @ =0x00000F92
	add r0, r0, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _08102CB8  @ =gUnknown_0817B7EC
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #5
	bl sub_080C9480
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
	add r0, r5, #0
	mov r1, #18
	bl sub_080C57F8
_08102CA2:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102CAC:
	.4byte gUnknown_03003E74
_08102CB0:
	.4byte gRam
_08102CB4:
	.4byte 0x00000F92
_08102CB8:
	.4byte gUnknown_0817B7EC
	THUMB_FUNC_END sub_08102C50

