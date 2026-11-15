	THUMB_FUNC_START sub_0803662C
sub_0803662C: @ 0x0803662C
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #0
	bne _08036640
	add r0, r4, #0
	mov r1, #3
	bl 0x080037EC
	b _08036646
_08036640:
	add r0, r4, #0
	bl GetNextFrame
_08036646:
	ldrb r0, [r4, #23]
	cmp r0, #251
	bhi _08036678
	add r0, r0, #4
	mov r3, #0
	strb r0, [r4, #23]
	ldr r0, _08036674  @ =gUnknown_03000488
	ldrb r1, [r4, #23]
	mov r5, #128
	lsl r5, r5, #1
	add r2, r5, #0
	add r1, r1, r2
	strh r1, [r0, #2]
	strh r1, [r0]
	strh r3, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	ldrb r0, [r4, #23]
	lsr r0, r0, #4
	strh r0, [r4, #58]
	b _08036684
	.byte 0x00
	.byte 0x00
_08036674:
	.4byte gUnknown_03000488
_08036678:
	add r0, r4, #0
	bl 0x08003BCC
	add r0, r4, #0
	bl DeleteThisEntity
_08036684:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803662C

	.byte 0x00
	.byte 0x00
