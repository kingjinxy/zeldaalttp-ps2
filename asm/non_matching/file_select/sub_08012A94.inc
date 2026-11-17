	THUMB_FUNC_START sub_08012A94
sub_08012A94: @ 0x08012A94
	push {r4-r6,lr}
	lsl r0, r0, #16
	lsr r2, r0, #16
	lsl r1, r1, #16
	lsr r5, r1, #16
	add r6, r5, #0
	ldr r0, _08012AD4  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	cmp r0, #3
	bne _08012AFE
	add r0, r2, #0
	sub r0, r0, #189
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #1
	bhi _08012AD8
	mov r4, #128
	lsl r4, r4, #7
	bl sub_0800099C
	mov r1, #255
	and r1, r1, r0
	mov r0, #177
	cmp r1, #126
	bhi _08012AC8
	mov r0, #187
_08012AC8:
	add r2, r0, #0
	add r1, r5, #0
	add r2, r4, #0
	bl sub_08008F78
	b _08012AFE
_08012AD4:
	.4byte gUnknown_03006C80
_08012AD8:
	cmp r2, #203
	beq _08012AE0
	cmp r2, #190
	bne _08012AFE
_08012AE0:
	mov r4, #128
	lsl r4, r4, #8
	bl sub_0800099C
	mov r1, #255
	and r1, r1, r0
	mov r0, #191
	cmp r1, #126
	bhi _08012AF4
	mov r0, #201
_08012AF4:
	add r2, r0, #0
	add r1, r6, #0
	add r2, r4, #0
	bl sub_08008F78
_08012AFE:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08012A94

