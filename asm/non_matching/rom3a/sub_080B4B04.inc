	THUMB_FUNC_START sub_080B4B04
sub_080B4B04: @ 0x080B4B04
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r2, _080B4B7C  @ =gRam
	ldr r1, _080B4B80  @ =0x00000A5E
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	strh r1, [r0]
	ldr r6, _080B4B84  @ =0x00000964
	add r0, r2, r6
	strh r1, [r0]
	add r3, r3, #8
	add r0, r2, r3
	strh r1, [r0]
	add r6, r6, #8
	add r0, r2, r6
	strh r1, [r0]
	add r3, r3, #8
	add r0, r2, r3
	strh r1, [r0]
	add r6, r6, #8
	add r0, r2, r6
	strh r1, [r0]
	add r3, r3, #8
	add r0, r2, r3
	strh r1, [r0]
	add r6, r6, #236
	add r5, r2, r6
	strh r1, [r5]
	ldr r1, _080B4B88  @ =gUnknown_0816F702
	ldr r3, _080B4B8C  @ =0x00000AB2
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	mov r4, #255
	eor r0, r0, r4
	add r0, r0, #1
	mov r3, #255
	and r0, r0, r3
	sub r6, r6, #130
	add r1, r2, r6
	ldrh r1, [r1]
	and r3, r3, r1
	add r7, r2, #0
	cmp r0, r3
	beq _080B4B94
	ldr r1, _080B4B90  @ =0x00000A5C
	add r0, r7, r1
	strh r3, [r0]
	b _080B4BA2
_080B4B7C:
	.4byte gRam
_080B4B80:
	.4byte 0x00000A5E
_080B4B84:
	.4byte 0x00000964
_080B4B88:
	.4byte gUnknown_0816F702
_080B4B8C:
	.4byte 0x00000AB2
_080B4B90:
	.4byte 0x00000A5C
_080B4B94:
	add r0, r1, #1
	and r0, r0, r4
	ldr r2, _080B4C34  @ =0x00000A5C
	add r1, r7, r2
	strh r0, [r1]
	mov r0, #2
	strh r0, [r5]
_080B4BA2:
	mov r3, #151
	lsl r3, r3, #4
	add r3, r3, r7
	mov r8, r3
	mov r6, #0
	mov r9, r6
	ldr r6, _080B4C38  @ =0x0000EFFF
	strh r6, [r3]
	bl sub_080B41C4
	bl sub_080B4080
	bl sub_080B4AB0
	ldr r0, _080B4C34  @ =0x00000A5C
	add r4, r7, r0
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
	ldr r1, _080B4C3C  @ =0x0000096C
	add r5, r7, r1
	mov r0, #160
	lsl r0, r0, #1
	strh r0, [r5]
	mov r2, r8
	strh r6, [r2]
	bl sub_080B41C4
	bl sub_080B4080
	bl sub_080B4AB0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	mov r3, r9
	strh r3, [r5]
	ldr r0, _080B4C40  @ =gUnknown_02003080
	ldr r1, _080B4C44  @ =0x0600C000
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	ldr r0, _080B4C48  @ =gUnknown_02003880
	ldr r1, _080B4C4C  @ =0x0600D000
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	ldr r0, _080B4C50  @ =gUnknown_02004080
	ldr r1, _080B4C54  @ =0x0600A000
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	ldr r0, _080B4C58  @ =gUnknown_02004880
	ldr r1, _080B4C5C  @ =0x0600B000
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	ldr r6, _080B4C60  @ =0x00000A5A
	add r1, r7, r6
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B4C34:
	.4byte 0x00000A5C
_080B4C38:
	.4byte 0x0000EFFF
_080B4C3C:
	.4byte 0x0000096C
_080B4C40:
	.4byte gUnknown_02003080
_080B4C44:
	.4byte 0x0600C000
_080B4C48:
	.4byte gUnknown_02003880
_080B4C4C:
	.4byte 0x0600D000
_080B4C50:
	.4byte gUnknown_02004080
_080B4C54:
	.4byte 0x0600A000
_080B4C58:
	.4byte gUnknown_02004880
_080B4C5C:
	.4byte 0x0600B000
_080B4C60:
	.4byte 0x00000A5A
	THUMB_FUNC_END sub_080B4B04

