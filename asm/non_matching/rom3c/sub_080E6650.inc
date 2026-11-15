	THUMB_FUNC_START sub_080E6650
sub_080E6650: @ 0x080E6650
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r1, _080E6690  @ =gRam
	ldr r0, _080E6694  @ =0x000015F9
	add r2, r1, r0
	mov r0, #5
	strb r0, [r2]
	ldr r0, _080E6698  @ =0x000015FA
	add r0, r0, r1
	mov r8, r0
	add r5, r2, #0
_080E6670:
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	mov r2, r8
	strb r1, [r2]
	ldrb r0, [r2]
	cmp r0, #1
	beq _080E669C
	cmp r0, #2
	beq _080E66A4
	bl sub_080AA868
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080E66A8
_080E6690:
	.4byte gRam
_080E6694:
	.4byte 0x000015F9
_080E6698:
	.4byte 0x000015FA
_080E669C:
	ldr r0, _080E66A0  @ =gArrowCount
	b _080E66A6
_080E66A0:
	.4byte gArrowCount
_080E66A4:
	ldr r0, _080E676C  @ =gBombs
_080E66A6:
	ldrb r0, [r0]
_080E66A8:
	cmp r0, #0
	bne _080E66AE
	b _080E67CE
_080E66AE:
	ldr r0, _080E6770  @ =gUnknown_0817767C
	ldr r4, _080E6774  @ =gRam
	ldr r1, _080E6778  @ =0x000015FA
	add r6, r4, r1
	ldrb r1, [r6]
	add r1, r1, r0
	ldrb r0, [r1]
	mov r1, r9
	mov r2, #7
	bl sub_080C9AAC
	add r3, r0, #0
	cmp r3, #0
	bge _080E66CC
	b _080E67CE
_080E66CC:
	ldr r2, _080E677C  @ =0x00000EE2
	add r1, r4, r2
	add r1, r3, r1
	ldr r2, _080E6780  @ =0x000016C4
	add r0, r4, r2
	ldrb r0, [r0]
	mov r7, #0
	strb r0, [r1]
	ldr r0, _080E6784  @ =0x00000F02
	add r1, r4, r0
	add r1, r3, r1
	add r2, r2, #1
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E6788  @ =0x00000ED2
	add r1, r4, r0
	add r1, r3, r1
	sub r2, r2, #5
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E678C  @ =0x00000EF2
	add r1, r4, r0
	add r1, r3, r1
	add r2, r2, #1
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E6790  @ =0x00001152
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #24
	strb r1, [r0]
	ldr r2, _080E6794  @ =0x00000F22
	add r1, r4, r2
	add r1, r3, r1
	ldr r2, _080E6798  @ =gUnknown_08177680
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E679C  @ =0x00000F12
	add r0, r4, r1
	add r2, r3, r0
	ldr r1, _080E67A0  @ =gUnknown_08177686
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _080E67A4  @ =0x000010E2
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080E67A8  @ =0x00001082
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080E67AC  @ =0x00000D74
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _080E67B0  @ =0x000009AC
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #26
	beq _080E67CC
	ldrb r0, [r6]
	cmp r0, #1
	beq _080E67B4
	cmp r0, #2
	beq _080E67BC
	mov r0, #1
	neg r0, r0
	bl sub_080AA83C
	b _080E67CE
_080E676C:
	.4byte gBombs
_080E6770:
	.4byte gUnknown_0817767C
_080E6774:
	.4byte gRam
_080E6778:
	.4byte 0x000015FA
_080E677C:
	.4byte 0x00000EE2
_080E6780:
	.4byte 0x000016C4
_080E6784:
	.4byte 0x00000F02
_080E6788:
	.4byte 0x00000ED2
_080E678C:
	.4byte 0x00000EF2
_080E6790:
	.4byte 0x00001152
_080E6794:
	.4byte 0x00000F22
_080E6798:
	.4byte gUnknown_08177680
_080E679C:
	.4byte 0x00000F12
_080E67A0:
	.4byte gUnknown_08177686
_080E67A4:
	.4byte 0x000010E2
_080E67A8:
	.4byte 0x00001082
_080E67AC:
	.4byte 0x00000D74
_080E67B0:
	.4byte 0x000009AC
_080E67B4:
	ldr r1, _080E67B8  @ =gArrowCount
	b _080E67BE
_080E67B8:
	.4byte gArrowCount
_080E67BC:
	ldr r1, _080E67C8  @ =gBombs
_080E67BE:
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	b _080E67CE
	.byte 0x00
	.byte 0x00
_080E67C8:
	.4byte gBombs
_080E67CC:
	strb r7, [r2]
_080E67CE:
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	cmp r0, #0
	blt _080E67DC
	b _080E6670
_080E67DC:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E6650

