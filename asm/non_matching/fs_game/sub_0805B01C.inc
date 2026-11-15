	THUMB_FUNC_START sub_0805B01C
sub_0805B01C: @ 0x0805B01C
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x08009308
	add r1, r7, #4
	strh r0, [r1]
	add r0, r7, #4
	ldrh r1, [r0]
	ldr r0, _0805B050  @ =0x00004002
	cmp r1, r0
	bne _0805B03A
	b _0805B1C4
_0805B03A:
	add r1, r7, #4
	ldrh r0, [r1]
	ldr r1, _0805B054  @ =0x00004012
	cmp r0, r1
	ble _0805B046
	b _0805B1C4
_0805B046:
	ldr r1, _0805B058  @ =0x0000400F
	cmp r0, r1
	bge _0805B04E
	b _0805B1C4
_0805B04E:
	b _0805B05C
_0805B050:
	.4byte 0x00004002
_0805B054:
	.4byte 0x00004012
_0805B058:
	.4byte 0x0000400F
_0805B05C:
	ldr r0, [r7]
	add r1, r7, #4
	ldrh r2, [r1]
	add r1, r2, #0
	add r2, r1, #0
	sub r2, r2, #15
	add r3, r2, #0
	lsl r1, r3, #3
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r7, #4
	ldrh r3, [r1]
	add r2, r3, #0
	add r1, r2, #0
	sub r1, r1, #15
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, _0805B160  @ =0x08003566
	ldr r0, [r7]
	ldr r2, _0805B164  @ =gUnknown_0842905C
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #43
	ldrb r3, [r4]
	lsr r4, r3, #2
	add r3, r4, #0
	lsl r4, r3, #24
	lsr r3, r4, #24
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r0, [r0, #50]
	add r2, r2, r0
	add r3, r2, #0
	lsl r0, r3, #16
	lsr r2, r0, #16
	ldr r0, [r7]
	ldr r3, _0805B164  @ =gUnknown_0842905C
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #43
	ldrb r4, [r5]
	lsr r5, r4, #2
	add r4, r5, #0
	lsl r5, r4, #24
	lsr r4, r5, #24
	add r5, r4, #1
	add r3, r3, r5
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r3, r4, #0
	ldrh r0, [r0, #54]
	add r3, r3, r0
	add r4, r3, #0
	lsl r0, r4, #16
	lsr r3, r0, #16
	ldr r0, [r7]
	bl 0x08003748
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0805B16C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #100
	ldrh r0, [r1]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0805B168  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0805B168  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	mov r0, #21
	bl play_sound
	b _0805B1B8
	.byte 0x00
	.byte 0x00
_0805B160:
	.4byte 0x08003566
_0805B164:
	.4byte gUnknown_0842905C
_0805B168:
	.4byte gUnknown_03000450
_0805B16C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0805B1BC  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0805B1BC  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #4
	add r0, r2, r1
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0805B1C0  @ =0x0000400E
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_0805B1B8:
	b _0805B1C4
	.byte 0x00
	.byte 0x00
_0805B1BC:
	.4byte gUnknown_03000450
_0805B1C0:
	.4byte 0x0000400E
_0805B1C4:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805B01C

