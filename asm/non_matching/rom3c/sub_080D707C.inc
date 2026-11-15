	THUMB_FUNC_START sub_080D707C
sub_080D707C: @ 0x080D707C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	ldr r6, _080D7248  @ =gRam
	ldr r1, _080D724C  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r3, [r0]
	add r7, r3, #0
	ldr r2, _080D7250  @ =0x00000D94
	add r1, r6, r2
	add r1, r4, r1
	ldrb r5, [r1]
	mov r9, r5
	mov r0, #48
	mov r5, #0
	mov r2, sp
	strb r5, [r2]
	mov r2, r9
	orr r0, r0, r2
	strb r0, [r1]
	ldr r5, _080D7254  @ =gUnknown_030031C2
	add r2, r4, r5
	ldr r0, _080D7258  @ =gUnknown_08175640
	add r0, r3, r0
	ldrb r1, [r0]
	strb r1, [r2]
	ldr r5, _080D725C  @ =0x00000FE2
	add r0, r6, r5
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080D70CE
	add r0, r1, #1
	strb r0, [r2]
_080D70CE:
	ldr r0, _080D7260  @ =0x00001122
	add r2, r6, r0
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r0, _080D7264  @ =gUnknown_08175644
	add r0, r3, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D70F8
	b _080D7236
_080D70F8:
	ldr r2, _080D7268  @ =gUnknown_030031F2
	add r1, r4, r2
	ldrb r0, [r1]
	cmp r0, #0
	bne _080D7114
	mov r0, #128
	strb r0, [r1]
	ldr r0, _080D726C  @ =0x00000F62
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
_080D7114:
	ldr r1, _080D7270  @ =0x00000F22
	add r1, r1, r6
	mov r10, r1
	add r3, r4, r1
	ldr r2, _080D7274  @ =gUnknown_08175638
	ldr r0, _080D726C  @ =0x00000F62
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r2, _080D7278  @ =0x00000F12
	add r2, r2, r6
	mov r9, r2
	add r3, r4, r2
	ldr r2, _080D727C  @ =gUnknown_0817563C
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r3]
	add r0, r4, #0
	bl Sprite3_Move
	ldr r0, _080D7280  @ =0x00000996
	add r1, r6, r0
	lsl r0, r4, #2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080D715A
	mov r0, #16
	strb r0, [r5]
_080D715A:
	ldrb r5, [r5]
	cmp r5, #1
	bne _080D7236
	ldr r1, _080D7284  @ =0x000010D2
	add r0, r6, r1
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D7236
	mov r0, #107
	mov r1, r8
	mov r2, #13
	bl sub_080C9AAC
	add r4, r0, #0
	cmp r4, #0
	blt _080D7236
	mov r0, r8
	mov r1, #88
	bl sub_080CF140
	ldr r2, _080D7288  @ =0x00000F82
	add r0, r6, r2
	add r0, r4, r0
	mov r3, #1
	strb r5, [r0]
	ldr r1, _080D7254  @ =gUnknown_030031C2
	add r0, r4, r1
	strb r5, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldr r0, _080D728C  @ =gUnknown_08175648
	add r0, r7, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080D7290  @ =gUnknown_0817564C
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _080D7294  @ =0x00000EE2
	add r0, r6, r5
	add r0, r4, r0
	strb r1, [r0]
	ldr r2, _080D7298  @ =0x00000F02
	add r0, r6, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r5, _080D729C  @ =0x00000964
	add r1, r6, r5
	ldr r0, _080D72A0  @ =gUnknown_08175650
	add r0, r7, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080D72A4  @ =gUnknown_08175654
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r2, r2, #48
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r5, _080D72A8  @ =0x00000EF2
	add r0, r6, r5
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	mov r0, r10
	add r1, r4, r0
	ldr r0, _080D72AC  @ =gUnknown_08175658
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r2, r9
	add r1, r4, r2
	ldr r0, _080D72B0  @ =gUnknown_0817565C
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r5, _080D72B4  @ =0x00001012
	add r1, r6, r5
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	orr r0, r0, r3
	strb r0, [r1]
	ldr r0, _080D72B8  @ =0x00001032
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #71
	orr r0, r0, r2
	strb r0, [r1]
	ldr r2, _080D72BC  @ =0x00000E75
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #68
	orr r0, r0, r2
	strb r0, [r1]
	ldr r5, _080D7268  @ =gUnknown_030031F2
	add r1, r4, r5
	mov r0, #32
	strb r0, [r1]
_080D7236:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D7248:
	.4byte gRam
_080D724C:
	.4byte 0x00000FB2
_080D7250:
	.4byte 0x00000D94
_080D7254:
	.4byte gUnknown_030031C2
_080D7258:
	.4byte gUnknown_08175640
_080D725C:
	.4byte 0x00000FE2
_080D7260:
	.4byte 0x00001122
_080D7264:
	.4byte gUnknown_08175644
_080D7268:
	.4byte gUnknown_030031F2
_080D726C:
	.4byte 0x00000F62
_080D7270:
	.4byte 0x00000F22
_080D7274:
	.4byte gUnknown_08175638
_080D7278:
	.4byte 0x00000F12
_080D727C:
	.4byte gUnknown_0817563C
_080D7280:
	.4byte 0x00000996
_080D7284:
	.4byte 0x000010D2
_080D7288:
	.4byte 0x00000F82
_080D728C:
	.4byte gUnknown_08175648
_080D7290:
	.4byte gUnknown_0817564C
_080D7294:
	.4byte 0x00000EE2
_080D7298:
	.4byte 0x00000F02
_080D729C:
	.4byte 0x00000964
_080D72A0:
	.4byte gUnknown_08175650
_080D72A4:
	.4byte gUnknown_08175654
_080D72A8:
	.4byte 0x00000EF2
_080D72AC:
	.4byte gUnknown_08175658
_080D72B0:
	.4byte gUnknown_0817565C
_080D72B4:
	.4byte 0x00001012
_080D72B8:
	.4byte 0x00001032
_080D72BC:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_080D707C

