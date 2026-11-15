	THUMB_FUNC_START sub_080CC880
sub_080CC880: @ 0x080CC880
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080CC954  @ =gRam
	ldr r1, _080CC958  @ =0x00000D23
	add r0, r4, r1
	add r0, r0, r5
	mov r9, r0
	ldrb r1, [r0]
	ldr r2, _080CC95C  @ =0x00000D2B
	add r0, r4, r2
	add r0, r0, r5
	mov r10, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	ldr r3, _080CC960  @ =0x00000952
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	mov r0, #255
	lsl r0, r0, #24
	and r0, r0, r1
	cmp r0, #0
	bne _080CC944
	ldr r1, _080CC964  @ =0x00000D33
	add r0, r4, r1
	add r7, r5, r0
	ldrb r1, [r7]
	add r2, r2, #16
	add r0, r4, r2
	add r0, r0, r5
	mov r8, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #80
	add r3, r3, #6
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	ldr r0, _080CC968  @ =0x017F0000
	cmp r1, r0
	bhi _080CC944
	ldr r1, _080CC96C  @ =0x00000996
	add r0, r4, r1
	ldrb r0, [r0]
	mov r6, #15
	add r1, r6, #0
	and r1, r1, r0
	cmp r1, #0
	bne _080CC944
	ldr r2, _080CC970  @ =0x0000097C
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080CC974  @ =0x000015FA
	add r0, r4, r3
	strb r1, [r0]
	bl GetRandomInt
	add r1, r6, #0
	and r1, r1, r0
	ldr r0, _080CC978  @ =gUnknown_08172A24
	add r0, r1, r0
	ldrb r2, [r0]
	ldr r3, _080CC97C  @ =0x000015F9
	add r0, r4, r3
	strb r2, [r0]
	ldr r0, _080CC980  @ =gUnknown_08172A34
	add r0, r1, r0
	ldrb r0, [r0]
	mov r2, r9
	strb r0, [r2]
	sub r3, r3, #5
	add r0, r4, r3
	ldrb r0, [r0]
	mov r2, r10
	strb r0, [r2]
	ldr r0, _080CC984  @ =gUnknown_08172A44
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r7]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, r8
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080CC170
_080CC944:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CC954:
	.4byte gRam
_080CC958:
	.4byte 0x00000D23
_080CC95C:
	.4byte 0x00000D2B
_080CC960:
	.4byte 0x00000952
_080CC964:
	.4byte 0x00000D33
_080CC968:
	.4byte 0x017F0000
_080CC96C:
	.4byte 0x00000996
_080CC970:
	.4byte 0x0000097C
_080CC974:
	.4byte 0x000015FA
_080CC978:
	.4byte gUnknown_08172A24
_080CC97C:
	.4byte 0x000015F9
_080CC980:
	.4byte gUnknown_08172A34
_080CC984:
	.4byte gUnknown_08172A44
	THUMB_FUNC_END sub_080CC880

