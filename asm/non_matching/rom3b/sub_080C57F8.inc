	THUMB_FUNC_START sub_080C57F8
sub_080C57F8: @ 0x080C57F8
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	ldr r2, _080C5878  @ =gRam
	ldr r3, _080C587C  @ =0x00000ED2
	add r0, r2, r3
	add r0, r4, r0
	lsr r1, r1, #24
	ldrb r0, [r0]
	add r1, r1, r0
	add r3, r3, #32
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _080C5880  @ =0x00000964
	add r5, r2, r0
	strh r1, [r5]
	ldr r3, _080C5884  @ =0x000010D2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r3, r2, #0
	cmp r0, #0
	bne _080C58DA
	ldr r2, _080C5888  @ =0x00000FA2
	add r0, r3, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #10
	bne _080C5848
	ldr r2, _080C588C  @ =0x0000140C
	add r0, r3, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _080C58DA
_080C5848:
	ldr r2, _080C5890  @ =0x00000958
	add r0, r3, r2
	ldrh r0, [r0]
	sub r0, r1, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
	strh r0, [r5]
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #255
	bhi _080C58DA
	ldr r1, _080C5894  @ =0x00001032
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _080C5898
	mov r5, #204
	mov r6, #2
	b _080C589C
	.byte 0x00
	.byte 0x00
_080C5878:
	.4byte gRam
_080C587C:
	.4byte 0x00000ED2
_080C5880:
	.4byte 0x00000964
_080C5884:
	.4byte 0x000010D2
_080C5888:
	.4byte 0x00000FA2
_080C588C:
	.4byte 0x0000140C
_080C5890:
	.4byte 0x00000958
_080C5894:
	.4byte 0x00001032
_080C5898:
	mov r5, #104
	mov r6, #0
_080C589C:
	ldr r2, _080C58E4  @ =gUnknown_03003E74
	ldr r1, _080C58E8  @ =0x00001012
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	ldrh r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	ldrh r1, [r1]
	ldr r4, _080C58EC  @ =0x00000964
	add r2, r3, r4
	ldrh r2, [r2]
	add r4, r4, #5
	add r3, r3, r4
	ldrb r4, [r3]
	mov r3, #48
	and r3, r3, r4
	mov r4, #8
	orr r3, r3, r4
	lsl r3, r3, #8
	orr r5, r5, r3
	str r6, [sp]
	add r3, r5, #0
	bl sub_080C6004
_080C58DA:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C58E4:
	.4byte gUnknown_03003E74
_080C58E8:
	.4byte 0x00001012
_080C58EC:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080C57F8

