	THUMB_FUNC_START sub_08115AD0
sub_08115AD0: @ 0x08115AD0
	push {r4,r5,lr}
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldr r1, _08115B00  @ =gRam
	ldr r2, _08115B04  @ =0x00000B5C
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #1
	bhi _08115B10
	ldr r2, _08115B08  @ =0x0000166A
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08115B10
	ldr r2, _08115B0C  @ =0x00000B5D
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	mov r1, #60
	bl __divsi3
	mov r1, #128
	lsl r1, r1, #2
	b _08115B4E
_08115B00:
	.4byte gRam
_08115B04:
	.4byte 0x00000B5C
_08115B08:
	.4byte 0x0000166A
_08115B0C:
	.4byte 0x00000B5D
_08115B10:
	ldr r2, _08115B34  @ =0x00000996
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _08115B3C
	ldr r1, _08115B38  @ =gUnknown_08173F38
	mov r0, #127
	and r0, r0, r2
	lsl r0, r0, #2
	add r0, r0, r1
	ldrh r1, [r0]
	lsr r1, r1, #2
	mov r0, #144
	lsl r0, r0, #1
	add r1, r1, r0
	b _08115B50
_08115B34:
	.4byte 0x00000996
_08115B38:
	.4byte gUnknown_08173F38
_08115B3C:
	ldr r1, _08115BD0  @ =gUnknown_08173F38
	mov r0, #127
	and r0, r0, r2
	lsl r0, r0, #2
	add r0, r0, r1
	ldrh r0, [r0]
	lsr r0, r0, #2
	mov r1, #144
	lsl r1, r1, #1
_08115B4E:
	sub r1, r1, r0
_08115B50:
	mov r0, #128
	lsl r0, r0, #9
	bl __divsi3
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r0, r3, #0
	mov r1, #0
	mov r2, #0
	bl sub_080C6508
	add r5, r0, #0
	cmp r5, #0
	blt _08115BC6
	lsl r3, r4, #3
	ldr r0, _08115BD4  @ =gUnknown_03002780
	add r3, r3, r0
	ldrh r2, [r3, #2]
	lsl r1, r2, #23
	lsr r1, r1, #23
	sub r1, r1, #8
	ldr r4, _08115BD8  @ =0x000001FF
	add r0, r4, #0
	and r1, r1, r0
	ldr r0, _08115BDC  @ =0xFFFFFE00
	and r0, r0, r2
	orr r0, r0, r1
	strh r0, [r3, #2]
	ldrb r0, [r3]
	sub r0, r0, #8
	strb r0, [r3]
	ldrb r0, [r3, #1]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r3, #1]
	mov r0, #7
	add r1, r5, #0
	and r1, r1, r0
	lsl r1, r1, #1
	ldrb r2, [r3, #3]
	mov r0, #15
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	asr r1, r5, #3
	mov r4, #1
	and r1, r1, r4
	lsl r1, r1, #4
	mov r2, #17
	neg r2, r2
	and r0, r0, r2
	orr r0, r0, r1
	asr r1, r5, #4
	and r1, r1, r4
	lsl r1, r1, #5
	sub r2, r2, #16
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #3]
_08115BC6:
	add r0, r5, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08115BD0:
	.4byte gUnknown_08173F38
_08115BD4:
	.4byte gUnknown_03002780
_08115BD8:
	.4byte 0x000001FF
_08115BDC:
	.4byte 0xFFFFFE00
	THUMB_FUNC_END sub_08115AD0

