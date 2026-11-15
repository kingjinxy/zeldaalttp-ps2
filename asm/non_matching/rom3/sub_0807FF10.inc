	THUMB_FUNC_START sub_0807FF10
sub_0807FF10: @ 0x0807FF10
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	bl sub_08080D00
	ldr r2, _0807FF54  @ =gRam
	ldr r1, _0807FF58  @ =0x0000188B
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _0807FF5C  @ =0x00000A1E
	add r4, r2, r3
	ldrh r0, [r4]
	cmp r0, #151
	bne _0807FFAC
	ldr r7, _0807FF60  @ =0x00000AA8
	add r0, r2, r7
	ldr r1, _0807FF64  @ =gUnknown_081676B2
	ldrh r2, [r0]
	ldrh r0, [r1, #6]
	and r0, r0, r2
	cmp r0, #0
	beq _0807FF74
	ldr r7, _0807FF68  @ =gUnknown_0838C224
	ldr r1, _0807FF6C  @ =gUnknown_0201C000
	add r0, r7, #0
	bl LZ77UnCompWram
	ldr r7, _0807FF70  @ =gUnknown_0832C90C
	b _0807FF90
	.byte 0x00
	.byte 0x00
_0807FF54:
	.4byte gRam
_0807FF58:
	.4byte 0x0000188B
_0807FF5C:
	.4byte 0x00000A1E
_0807FF60:
	.4byte 0x00000AA8
_0807FF64:
	.4byte gUnknown_081676B2
_0807FF68:
	.4byte gUnknown_0838C224
_0807FF6C:
	.4byte gUnknown_0201C000
_0807FF70:
	.4byte gUnknown_0832C90C
_0807FF74:
	ldr r1, _0807FF9C  @ =gUnknown_08162258
	ldrh r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r7, [r0]
	ldr r1, _0807FFA0  @ =gUnknown_0201C000
	add r0, r7, #0
	bl LZ77UnCompWram
	ldr r1, _0807FFA4  @ =gUnknown_081618D8
	ldrh r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r7, [r0]
_0807FF90:
	ldr r1, _0807FFA8  @ =gUnknown_02018000
	add r0, r7, #0
	bl LZ77UnCompWram
	b _0807FFD0
	.byte 0x00
	.byte 0x00
_0807FF9C:
	.4byte gUnknown_08162258
_0807FFA0:
	.4byte gUnknown_0201C000
_0807FFA4:
	.4byte gUnknown_081618D8
_0807FFA8:
	.4byte gUnknown_02018000
_0807FFAC:
	ldr r1, _0808028C  @ =gUnknown_08162258
	ldrh r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r7, [r0]
	ldr r1, _08080290  @ =gUnknown_0201C000
	add r0, r7, #0
	bl LZ77UnCompWram
	ldr r1, _08080294  @ =gUnknown_081618D8
	ldrh r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r7, [r0]
	ldr r1, _08080298  @ =gUnknown_02018000
	add r0, r7, #0
	bl LZ77UnCompWram
_0807FFD0:
	ldr r1, _0808029C  @ =gUnknown_08161D98
	ldr r4, _080802A0  @ =gRam
	ldr r2, _080802A4  @ =0x00000A1E
	add r0, r4, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r7, [r0]
	ldr r1, _080802A8  @ =gUnknown_0201A000
	add r0, r7, #0
	bl LZ77UnCompWram
	ldr r3, _080802AC  @ =0x000009E5
	add r0, r4, r3
	ldrb r2, [r0]
	ldr r7, _080802B0  @ =0x00000ACE
	add r1, r4, r7
	mov r3, #0
	mov r0, #0
	strh r2, [r1]
	ldr r1, _080802B4  @ =0x00000AC2
	add r2, r4, r1
	ldr r1, _080802B8  @ =0x0000FF30
	strh r1, [r2]
	mov r2, #172
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	sub r7, r7, #8
	add r1, r4, r7
	strh r0, [r1]
	ldr r2, _080802BC  @ =0x0000179C
	add r1, r4, r2
	strh r0, [r1]
	ldr r7, _080802C0  @ =0x0000179A
	add r1, r4, r7
	strh r0, [r1]
	ldr r2, _080802C4  @ =0x00000AC8
	add r1, r4, r2
	strh r0, [r1]
	ldr r7, _080802C8  @ =0x00000ACA
	add r1, r4, r7
	strh r0, [r1]
	ldr r1, _080802CC  @ =0x00000ADC
	add r2, r4, r1
	ldr r1, _080802D0  @ =0x0000FFFF
	strh r1, [r2]
	ldr r2, _080802D4  @ =0x00000AF8
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #50
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #6
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #238
	add r1, r4, r7
	strh r0, [r1]
	sub r2, r2, #10
	add r1, r4, r2
	strh r0, [r1]
	sub r7, r7, #244
	add r1, r4, r7
	strh r0, [r1]
	sub r2, r2, #224
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #14
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #202
	add r1, r4, r2
	strh r0, [r1]
	sub r7, r7, #36
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #86
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #86
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #18
	add r1, r4, r2
	strh r0, [r1]
	sub r7, r7, #32
	add r1, r4, r7
	strh r0, [r1]
	sub r2, r2, #46
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #32
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #32
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	ldr r7, _080802D8  @ =0x00001934
	add r1, r4, r7
	strh r0, [r1]
	ldr r2, _080802DC  @ =0x00001936
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	sub r7, r7, #6
	add r1, r4, r7
	strh r0, [r1]
	ldr r2, _080802E0  @ =0x00000AD6
	add r1, r4, r2
	strh r0, [r1]
	ldr r7, _080802E4  @ =0x00000AD8
	add r1, r4, r7
	strh r0, [r1]
	sub r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	sub r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #108
	add r1, r4, r2
	strh r0, [r1]
	add r7, r7, #108
	add r1, r4, r7
	strh r0, [r1]
	add r2, r2, #26
	add r1, r4, r2
	strh r0, [r1]
	sub r7, r7, #56
	add r1, r4, r7
	strh r0, [r1]
	ldr r1, _080802E8  @ =0x00001812
	add r0, r4, r1
	strb r3, [r0]
	mov r6, #0
	mov r8, r4
	mov r1, #0
	ldr r3, _080802EC  @ =0x000018B0
	add r3, r3, r8
	ldr r2, _080802F0  @ =0x0000195C
	add r2, r2, r8
	ldr r4, _080802F4  @ =0x0000193C
	add r4, r4, r8
	ldr r7, _080802F8  @ =0x000018F0
	add r7, r7, r8
_08080146:
	lsl r0, r6, #1
	strh r1, [r3, #32]
	strh r1, [r3]
	strh r1, [r7]
	strh r1, [r4]
	strh r1, [r2]
	strh r1, [r2, #32]
	ldr r5, _080802FC  @ =0x0000199C
	add r5, r5, r8
	add r0, r0, r5
	strh r1, [r0]
	add r3, r3, #2
	add r2, r2, #2
	add r4, r4, #2
	add r7, r7, #2
	add r6, r6, #1
	cmp r6, #15
	ble _08080146
	ldr r2, _08080300  @ =0xFFFFE664
	add r2, r2, r5
	mov r9, r2
	ldr r3, _08080304  @ =0xFFFFF058
	add r4, r5, r3
	mov r6, #0
	strh r6, [r4]
	ldr r1, _08080308  @ =gUnknown_08162768
	ldr r7, _0808030C  @ =0xFFFFF082
	add r7, r7, r5
	mov r8, r7
	ldrh r0, [r7]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r7, [r0]
	ldrb r1, [r7, #1]
	ldr r2, _08080310  @ =0xFFFFF118
	add r0, r5, r2
	strh r1, [r0]
	bl sub_0807FEB4
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldr r3, _08080314  @ =0xFFFFF05C
	add r5, r5, r3
	strh r6, [r5]
	add r0, r7, #0
	bl sub_0807FD84
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	mov r0, #128
	lsl r0, r0, #7
	strh r0, [r5]
	add r0, r7, #0
	bl sub_0807FD84
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	strh r6, [r5]
	add r0, r7, #0
	bl sub_0807FD84
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	ldr r1, _08080318  @ =gUnknown_08162C28
	mov r7, r8
	ldrh r0, [r7]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	strh r6, [r4]
	bl sub_0807FE08
	strh r6, [r4]
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r9
	mov r10, r0
	ldr r1, _0808031C  @ =0x000009DA
	add r1, r1, r9
	mov r8, r1
	ldr r7, _080802D0  @ =0x0000FFFF
_080801F0:
	ldrh r6, [r4]
	lsl r1, r6, #1
	ldr r2, _08080320  @ =gUnknown_020029C0
	add r5, r1, r2
	mov r3, r8
	ldrh r0, [r3]
	ldrh r2, [r5]
	cmp r0, r2
	bne _08080210
	ldr r3, _08080324  @ =gUnknown_020029C2
	add r0, r1, r3
	ldrh r0, [r0]
	mov r1, r10
	strh r0, [r1]
	bl sub_0807D0EC
_08080210:
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	ldrh r0, [r5]
	cmp r0, r7
	bne _080801F0
	ldr r1, _080802A0  @ =gRam
	ldr r2, _08080328  @ =0x00000AD2
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _0808032C  @ =0x00000AD4
	add r0, r1, r3
	mov r3, #0
	strh r2, [r0]
	mov r4, #178
	lsl r4, r4, #4
	add r0, r1, r4
	strh r2, [r0]
	ldr r7, _08080330  @ =0x000009F4
	add r0, r1, r7
	strh r3, [r0]
	add r4, r1, #0
	ldr r0, _0808031C  @ =0x000009DA
	add r0, r0, r4
	mov r8, r0
	ldr r5, _080802D0  @ =0x0000FFFF
_08080244:
	ldr r1, _08080330  @ =0x000009F4
	add r2, r4, r1
	ldrh r6, [r2]
	lsl r0, r6, #1
	ldr r3, _08080334  @ =gUnknown_02002BC0
	add r0, r0, r3
	mov r7, r8
	ldrh r1, [r7]
	ldrh r0, [r0]
	cmp r1, r0
	bne _0808033C
	add r6, r6, #1
	ldr r0, _08080338  @ =0xFFFFF60C
	add r3, r2, r0
	add r7, r2, #0
	ldr r5, _080802D0  @ =0x0000FFFF
	lsl r0, r6, #1
	ldr r1, _08080334  @ =gUnknown_02002BC0
	add r4, r0, r1
_0808026A:
	ldrh r0, [r4]
	mov r2, #151
	lsl r2, r2, #4
	add r1, r3, r2
	strh r0, [r1]
	add r4, r4, #2
	add r6, r6, #1
	strh r6, [r7]
	add r0, r6, #0
	str r3, [sp]
	bl sub_0807D288
	ldrh r0, [r4]
	ldr r3, [sp]
	cmp r0, r5
	beq _08080362
	b _0808026A
_0808028C:
	.4byte gUnknown_08162258
_08080290:
	.4byte gUnknown_0201C000
_08080294:
	.4byte gUnknown_081618D8
_08080298:
	.4byte gUnknown_02018000
_0808029C:
	.4byte gUnknown_08161D98
_080802A0:
	.4byte gRam
_080802A4:
	.4byte 0x00000A1E
_080802A8:
	.4byte gUnknown_0201A000
_080802AC:
	.4byte 0x000009E5
_080802B0:
	.4byte 0x00000ACE
_080802B4:
	.4byte 0x00000AC2
_080802B8:
	.4byte 0x0000FF30
_080802BC:
	.4byte 0x0000179C
_080802C0:
	.4byte 0x0000179A
_080802C4:
	.4byte 0x00000AC8
_080802C8:
	.4byte 0x00000ACA
_080802CC:
	.4byte 0x00000ADC
_080802D0:
	.4byte 0x0000FFFF
_080802D4:
	.4byte 0x00000AF8
_080802D8:
	.4byte 0x00001934
_080802DC:
	.4byte 0x00001936
_080802E0:
	.4byte 0x00000AD6
_080802E4:
	.4byte 0x00000AD8
_080802E8:
	.4byte 0x00001812
_080802EC:
	.4byte 0x000018B0
_080802F0:
	.4byte 0x0000195C
_080802F4:
	.4byte 0x0000193C
_080802F8:
	.4byte 0x000018F0
_080802FC:
	.4byte 0x0000199C
_08080300:
	.4byte 0xFFFFE664
_08080304:
	.4byte 0xFFFFF058
_08080308:
	.4byte gUnknown_08162768
_0808030C:
	.4byte 0xFFFFF082
_08080310:
	.4byte 0xFFFFF118
_08080314:
	.4byte 0xFFFFF05C
_08080318:
	.4byte gUnknown_08162C28
_0808031C:
	.4byte 0x000009DA
_08080320:
	.4byte gUnknown_020029C0
_08080324:
	.4byte gUnknown_020029C2
_08080328:
	.4byte 0x00000AD2
_0808032C:
	.4byte 0x00000AD4
_08080330:
	.4byte 0x000009F4
_08080334:
	.4byte gUnknown_02002BC0
_08080338:
	.4byte 0xFFFFF60C
_0808033C:
	add r6, r6, #1
	ldr r3, _08080374  @ =gUnknown_03002C24
	ldr r2, _08080378  @ =0x0000FFFF
	lsl r0, r6, #1
	ldr r7, _0808037C  @ =gUnknown_02002BC0
	add r1, r0, r7
_08080348:
	ldrh r0, [r1]
	add r1, r1, #2
	add r6, r6, #1
	strh r6, [r3]
	cmp r0, r2
	bne _08080348
	lsl r0, r6, #1
	ldr r1, _0808037C  @ =gUnknown_02002BC0
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, r5
	beq _08080362
	b _08080244
_08080362:
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
_08080374:
	.4byte gUnknown_03002C24
_08080378:
	.4byte 0x0000FFFF
_0808037C:
	.4byte gUnknown_02002BC0
	THUMB_FUNC_END sub_0807FF10

