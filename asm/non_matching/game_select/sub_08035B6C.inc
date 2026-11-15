	THUMB_FUNC_START sub_08035B6C
sub_08035B6C: @ 0x08035B6C
	push {r4,r5,lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08035BD0
	mov r0, #8
	strb r0, [r1, #20]
	mov r0, #60
	strb r0, [r1, #23]
	ldr r1, _08035BD8  @ =gUnknown_0201F000
	mov r0, #1
	str r0, [r1]
	mov r4, #0
	ldr r0, _08035BDC  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r4, r0
	bcs _08035BC8
	ldr r5, _08035BE0  @ =gUnknown_03006A58
_08035B96:
	mov r0, #104
	mov r1, #1
	add r2, r4, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08035BBA
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r0, r0, #4
	add r0, r0, r5
	ldr r0, [r0]
	mov r2, #160
	lsl r2, r2, #12
	ldr r3, _08035BE4  @ =0xFFF00000
	bl sub_0803D4A4
_08035BBA:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _08035BDC  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r4, r0
	bcc _08035B96
_08035BC8:
	mov r0, #135
	lsl r0, r0, #2
	bl play_sound
_08035BD0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08035BD8:
	.4byte gUnknown_0201F000
_08035BDC:
	.4byte gUnknown_03006C80
_08035BE0:
	.4byte gUnknown_03006A58
_08035BE4:
	.4byte 0xFFF00000
	THUMB_FUNC_END sub_08035B6C

