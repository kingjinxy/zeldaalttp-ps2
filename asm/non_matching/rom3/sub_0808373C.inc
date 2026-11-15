	THUMB_FUNC_START sub_0808373C
sub_0808373C: @ 0x0808373C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r6, r0, #0
	ldr r4, _080837EC  @ =gRam
	lsl r5, r6, #1
	ldr r0, _080837F0  @ =0x0000199C
	add r0, r0, r4
	mov r8, r0
	add r3, r5, r0
	ldrh r1, [r3]
	mov r0, #128
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08083768
	ldr r1, _080837F4  @ =0x00000BBF
	add r0, r4, r1
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
_08083768:
	ldrh r0, [r3]
	lsl r0, r0, #18
	lsr r2, r0, #19
	ldr r3, _080837F8  @ =gUnknown_0200CBA0
	add r0, r2, r3
	ldrb r7, [r0]
	cmp r7, #32
	beq _08083838
	ldr r1, _080837FC  @ =0x000019BC
	add r0, r4, r1
	add r0, r5, r0
	ldr r1, _08083800  @ =0x00002122
	strh r1, [r0]
	ldr r2, _08083804  @ =0x000019DC
	add r0, r4, r2
	add r0, r5, r0
	add r1, r1, #16
	strh r1, [r0]
	ldr r3, _08083808  @ =0x000019FC
	add r0, r4, r3
	add r0, r5, r0
	sub r1, r1, #15
	strh r1, [r0]
	ldr r1, _0808380C  @ =0x00001A1C
	add r0, r4, r1
	add r0, r5, r0
	ldr r1, _08083810  @ =0x00002133
	strh r1, [r0]
	add r0, r6, #0
	bl sub_08083AE4
	ldr r2, _08083814  @ =0x00001732
	add r1, r4, r2
	strb r6, [r1]
	mov r2, #1
	ldr r6, _08083818  @ =0x00001A4A
	add r3, r4, r6
	add r6, r6, #1
	add r0, r4, r6
	ldrb r0, [r0]
	sub r0, r0, #1
	ldrb r1, [r1]
	cmp r0, r1
	beq _080837C2
	mov r2, #0
_080837C2:
	add r1, r2, r3
	mov r0, #0
	strb r0, [r1]
	cmp r7, #35
	bne _08083824
	mov r1, #177
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	mov r1, #1
	eor r0, r0, r1
	ldr r2, _0808381C  @ =0x00000B0E
	add r1, r4, r2
	strh r0, [r1]
	ldr r3, _08083820  @ =0x0000195C
	add r0, r4, r3
	add r0, r5, r0
	mov r1, #4
	strh r1, [r0]
	b _08083896
	.byte 0x00
	.byte 0x00
_080837EC:
	.4byte gRam
_080837F0:
	.4byte 0x0000199C
_080837F4:
	.4byte 0x00000BBF
_080837F8:
	.4byte gUnknown_0200CBA0
_080837FC:
	.4byte 0x000019BC
_08083800:
	.4byte 0x00002122
_08083804:
	.4byte 0x000019DC
_08083808:
	.4byte 0x000019FC
_0808380C:
	.4byte 0x00001A1C
_08083810:
	.4byte 0x00002133
_08083814:
	.4byte 0x00001732
_08083818:
	.4byte 0x00001A4A
_0808381C:
	.4byte 0x00000B0E
_08083820:
	.4byte 0x0000195C
_08083824:
	ldr r6, _08083830  @ =0x0000195C
	add r0, r4, r6
	add r0, r5, r0
	ldr r1, _08083834  @ =0x0000FFFF
	strh r1, [r0]
	b _08083896
_08083830:
	.4byte 0x0000195C
_08083834:
	.4byte 0x0000FFFF
_08083838:
	ldr r1, _080838A0  @ =0x000016C4
	add r0, r4, r1
	ldr r2, _080838A4  @ =0x00000952
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _080838A8  @ =0x00000504
	add r1, r4, r3
	strh r0, [r1]
	mov r5, #182
	lsl r5, r5, #5
	add r0, r4, r5
	ldr r6, _080838AC  @ =0x00000958
	add r2, r4, r6
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	add r3, r3, #2
	add r2, r4, r3
	strh r0, [r2]
	mov r0, #108
	bl sub_0812A324
	ldr r5, _080838B0  @ =0x00000AD2
	add r3, r4, r5
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r6, _080838B4  @ =0x0000197C
	add r1, r4, r6
	add r0, r0, r1
	ldrh r2, [r0]
	lsl r1, r2, #1
	ldr r0, _080838B8  @ =gUnknown_020029C0
	add r2, r1, r0
	mov r5, #207
	lsl r5, r5, #4
	add r0, r4, r5
	ldrb r0, [r0]
	strh r0, [r2]
	ldr r6, _080838BC  @ =gUnknown_020029C2
	add r1, r1, r6
	ldrh r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r1]
_08083896:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080838A0:
	.4byte 0x000016C4
_080838A4:
	.4byte 0x00000952
_080838A8:
	.4byte 0x00000504
_080838AC:
	.4byte 0x00000958
_080838B0:
	.4byte 0x00000AD2
_080838B4:
	.4byte 0x0000197C
_080838B8:
	.4byte gUnknown_020029C0
_080838BC:
	.4byte gUnknown_020029C2
	THUMB_FUNC_END sub_0808373C

