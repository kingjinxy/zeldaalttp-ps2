	THUMB_FUNC_START sub_0802337C
sub_0802337C: @ 0x0802337C
	push {lr}
	add r1, r0, #0
	add r0, r0, #124
	ldrb r0, [r0]
	cmp r0, #0
	bne _08023392
	mov r0, #7
	strb r0, [r1, #20]
	mov r0, #150
	strb r0, [r1, #23]
	b _080233AC
_08023392:
	add r1, r1, #110
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080233AC
	mov r0, #225
	lsl r0, r0, #4
	strh r0, [r1]
	mov r0, #14
	bl sub_0800D6A4
_080233AC:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802337C

