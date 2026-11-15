	THUMB_FUNC_START sub_08019AD4
sub_08019AD4: @ 0x08019AD4
	push {r4-r7,lr}
	add r5, r0, #0
	mov r4, #0
	ldr r0, _08019B48  @ =gUnknown_03006C80
	mov r12, r0
	ldrb r0, [r0]
	cmp r4, r0
	bcs _08019B16
	ldr r6, _08019B4C  @ =gUnknown_03006A30
_08019AE6:
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r2, r0, #4
	add r0, r6, #0
	add r0, r0, #40
	add r3, r2, r0
	ldr r0, [r3]
	mov r7, #58
	ldrsh r1, [r0, r7]
	cmp r1, #0
	bne _08019B08
	add r0, r2, r6
	strh r1, [r0, #8]
	ldr r0, [r3]
	add r0, r0, #43
	mov r1, #255
	strb r1, [r0]
_08019B08:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, r12
	ldrb r0, [r0]
	cmp r4, r0
	bcc _08019AE6
_08019B16:
	bl sub_0803DF84
	add r0, r5, #0
	bl 0x08003828
	add r0, r5, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08019B40
	mov r1, #0
	mov r0, #2
	strb r0, [r5, #20]
	strb r1, [r5, #21]
	mov r0, #5
	strb r0, [r5, #23]
	ldr r0, _08019B50  @ =0x00000903
	bl sub_0800D67C
_08019B40:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08019B48:
	.4byte gUnknown_03006C80
_08019B4C:
	.4byte gUnknown_03006A30
_08019B50:
	.4byte 0x00000903
	THUMB_FUNC_END sub_08019AD4

