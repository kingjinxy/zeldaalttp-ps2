	THUMB_FUNC_START sub_08073ACC
sub_08073ACC: @ 0x08073ACC
	push {r4,r5,lr}
	ldr r4, _08073B0C  @ =gRam
	ldr r1, _08073B10  @ =0x00000CAA
	add r0, r4, r1
	mov r5, #0
	strb r5, [r0]
	bl sub_08077CFC
	ldr r1, _08073B14  @ =0x000009EA
	add r0, r4, r1
	strh r5, [r0]
	bl sub_08072F1C
	ldr r0, _08073B18  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #201
	lsl r0, r0, #4
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r1, _08073B1C  @ =0x000009E8
	add r4, r4, r1
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_08073B0C:
	.4byte gRam
_08073B10:
	.4byte 0x00000CAA
_08073B14:
	.4byte 0x000009EA
_08073B18:
	.4byte 0x000009AD
_08073B1C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08073ACC

