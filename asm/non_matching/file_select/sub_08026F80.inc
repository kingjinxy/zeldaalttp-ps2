	THUMB_FUNC_START sub_08026F80
sub_08026F80: @ 0x08026F80
	push {r4,r5,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r2, #128
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08026FD2
	add r0, r4, #0
	add r0, r0, #60
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08026FC8
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_08003BCC
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
	mov r0, #86
	bl sub_08003DFC
	b _0802702A
_08026FC8:
	mov r0, #91
	bl sub_08003DFC
	mov r0, #64
	strb r0, [r4, #23]
_08026FD2:
	ldrb r1, [r4, #23]
	cmp r1, #0
	beq _0802702A
	sub r1, r1, #1
	strb r1, [r4, #23]
	ldrb r0, [r4, #24]
	add r5, r0, #1
	strb r5, [r4, #24]
	lsl r1, r1, #24
	lsr r2, r1, #24
	cmp r2, #0
	beq _08027018
	ldr r0, _08027010  @ =gUnknown_03000488
	ldr r3, _08027014  @ =gUnknown_0813CCE0
	mov r2, #14
	and r2, r2, r5
	lsl r1, r2, #1
	add r1, r1, r3
	ldrh r1, [r1]
	strh r1, [r0]
	add r2, r2, #1
	lsl r2, r2, #1
	add r2, r2, r3
	ldrh r1, [r2]
	strh r1, [r0, #2]
	mov r1, #0
	strh r1, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	b _0802702A
_08027010:
	.4byte gUnknown_03000488
_08027014:
	.4byte gUnknown_0813CCE0
_08027018:
	ldr r0, _08027030  @ =gUnknown_03000488
	mov r1, #128
	lsl r1, r1, #1
	strh r1, [r0]
	strh r1, [r0, #2]
	strh r2, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
_0802702A:
	pop {r4,r5}
	pop {r0}
	bx r0
_08027030:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08026F80

