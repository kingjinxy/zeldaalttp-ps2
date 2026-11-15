	THUMB_FUNC_START sub_08121710
sub_08121710: @ 0x08121710
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r7, #0
	mov r1, #16
	bl sub_080C18C8
	ldr r5, _08121778  @ =gRam
	ldr r0, _0812177C  @ =0x000015DD
	add r4, r5, r0
	ldrb r1, [r4]
	add r0, r7, #0
	bl sub_081214B0
	ldrb r4, [r4]
	ldr r1, _08121780  @ =0x00000E1F
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _08121790
	ldr r1, _08121784  @ =0x000009AD
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08121838
	ldr r1, _08121788  @ =0x00000E33
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _08121838
	mov r0, #6
	strb r0, [r1]
	ldr r0, _0812178C  @ =0x00000E29
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #5
	bne _08121838
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	b _0812187C
_08121778:
	.4byte gRam
_0812177C:
	.4byte 0x000015DD
_08121780:
	.4byte 0x00000E1F
_08121784:
	.4byte 0x000009AD
_08121788:
	.4byte 0x00000E33
_0812178C:
	.4byte 0x00000E29
_08121790:
	ldr r1, _08121840  @ =0x000009AD
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08121860
	ldr r1, _08121844  @ =0x00000E33
	add r0, r5, r1
	add r0, r0, r4
	mov r9, r0
	ldrb r0, [r0]
	mov r8, r0
	cmp r0, #0
	bne _08121860
	ldr r0, _08121848  @ =0x00000A88
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080BF774
	add r0, r4, #0
	bl sub_080C1768
	add r0, r4, #0
	mov r1, #0
	bl sub_080BF804
	ldr r1, _0812184C  @ =0x00000A92
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #128
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #99
	bhi _08121860
	mov r0, #228
	strb r0, [r1]
	ldr r0, _08121850  @ =0x00000DC5
	add r3, r5, r0
	add r3, r4, r3
	ldrb r1, [r3]
	add r0, r0, #20
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r0, r0, #30
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	ldr r1, _08121854  @ =0x00000DCF
	add r3, r5, r1
	add r3, r4, r3
	ldrb r1, [r3]
	ldr r0, _08121858  @ =0x00000DE3
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #255
	lsl r0, r0, #8
	add r0, r0, #252
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	ldr r1, _0812185C  @ =0x00000E29
	add r0, r5, r1
	add r0, r4, r0
	mov r1, r8
	strb r1, [r0]
	mov r0, #6
	mov r1, r9
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #110
	bl sub_080C19F8
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
_08121838:
	add r0, r4, #0
	bl sub_08119410
	b _0812187C
_08121840:
	.4byte 0x000009AD
_08121844:
	.4byte 0x00000E33
_08121848:
	.4byte 0x00000A88
_0812184C:
	.4byte 0x00000A92
_08121850:
	.4byte 0x00000DC5
_08121854:
	.4byte 0x00000DCF
_08121858:
	.4byte 0x00000DE3
_0812185C:
	.4byte 0x00000E29
_08121860:
	ldr r2, _08121890  @ =gRam
	ldr r1, _08121894  @ =0x00000DBB
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #0
	mov r1, #2
	strb r1, [r0]
	ldr r0, _08121898  @ =0x00000E47
	add r2, r2, r0
	add r2, r4, r2
	strb r3, [r2]
	add r0, r4, #0
	bl sub_08118F68
_0812187C:
	add r0, r7, #0
	add r1, r4, #0
	bl sub_081215E0
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08121890:
	.4byte gRam
_08121894:
	.4byte 0x00000DBB
_08121898:
	.4byte 0x00000E47
	THUMB_FUNC_END sub_08121710

