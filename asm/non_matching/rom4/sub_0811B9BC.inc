	THUMB_FUNC_START sub_0811B9BC
sub_0811B9BC: @ 0x0811B9BC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0811BA30  @ =gRam
	ldr r1, _0811BA34  @ =0x00001724
	add r3, r2, r1
	mov r4, #0
	mov r1, #48
	strb r1, [r3]
	ldr r3, _0811BA38  @ =0x00001723
	add r1, r2, r3
	strb r4, [r1]
	ldr r3, _0811BA3C  @ =gUnknown_0817F72D
	ldr r5, _0811BA40  @ =gUnknown_02003080
	add r0, r0, r5
	ldrb r1, [r0]
	add r1, r1, r3
	ldrb r3, [r1]
	mov r5, #151
	lsl r5, r5, #4
	add r1, r2, r5
	strb r3, [r1]
	ldr r3, _0811BA44  @ =gUnknown_0817F724
	ldr r1, _0811BA48  @ =gUnknown_0817F59E
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r5, r0, #24
	lsl r1, r5, #1
	ldr r3, _0811BA4C  @ =0x00000968
	add r0, r2, r3
	strb r1, [r0]
	ldr r1, _0811BA50  @ =0x00000969
	add r0, r2, r1
	strb r4, [r0]
	add r3, r3, #12
	add r0, r2, r3
	strb r4, [r0]
	ldr r0, _0811BA54  @ =0x00000975
	add r1, r2, r0
	mov r0, #50
	strb r0, [r1]
	ldr r1, _0811BA58  @ =0x0000096C
	add r0, r2, r1
	strh r4, [r0]
	ldr r3, _0811BA5C  @ =0x000015F7
	add r2, r2, r3
	ldrb r0, [r2]
	cmp r0, #0
	bne _0811BA60
	mov r0, #24
	bl sub_080CF370
	b _0811BA66
	.byte 0x00
	.byte 0x00
_0811BA30:
	.4byte gRam
_0811BA34:
	.4byte 0x00001724
_0811BA38:
	.4byte 0x00001723
_0811BA3C:
	.4byte gUnknown_0817F72D
_0811BA40:
	.4byte gUnknown_02003080
_0811BA44:
	.4byte gUnknown_0817F724
_0811BA48:
	.4byte gUnknown_0817F59E
_0811BA4C:
	.4byte 0x00000968
_0811BA50:
	.4byte 0x00000969
_0811BA54:
	.4byte 0x00000975
_0811BA58:
	.4byte 0x0000096C
_0811BA5C:
	.4byte 0x000015F7
_0811BA60:
	mov r0, #24
	bl sub_080CF3B8
_0811BA66:
	ldr r2, _0811BAA0  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	ldr r3, _0811BAA4  @ =0x00000958
	add r1, r2, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r3, r3, #32
	add r1, r2, r3
	strh r0, [r1]
	ldr r1, _0811BAA8  @ =0x00000964
	add r0, r2, r1
	sub r3, r3, #38
	add r1, r2, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r1, _0811BAAC  @ =0x0000097C
	add r2, r2, r1
	strh r0, [r2]
	add r0, r5, #0
	bl sub_0811B50C
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811BAA0:
	.4byte gRam
_0811BAA4:
	.4byte 0x00000958
_0811BAA8:
	.4byte 0x00000964
_0811BAAC:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_0811B9BC

